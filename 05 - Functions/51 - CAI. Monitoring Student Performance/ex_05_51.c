// ex_05_51.c
// Computer-Assisted Instruction: Monitoring Student Performance

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand9( void );
void comment( int );

int main( void ) {

   srand(( unsigned )time( NULL ));

   char again = 'y';
   while ( again == 'y' ) {

      int attempts = 10;
      int correct = 0;

      for ( int attempt = 1; attempt <= attempts; ++attempt ) {

         int n1 = rand9();
         int n2 = rand9();

         int answer = 0;
         printf( "How much is %d times %d? ", n1, n2 );
         scanf_s( "%d", &answer );

         int is_right = answer == n1 * n2;

         if ( is_right )
            ++correct;

         comment( is_right );
      }

      puts( correct >= attempts * 0.75
         ? "\nCongratulations, you are ready to go to the next level!"
         : "\nPlease ask your teacher for extra help." );
      printf( "%s? ", "Continue (y/n)" );
      scanf( " %c", &again );
      puts( "" );
   }
}

int rand9( void ) {
   return rand() % 10;
}

void comment( int is_correct ) {

   int number = 1 + rand() % 4;

   if ( is_correct ) switch ( number ) {

      case 1: puts( "Very good!" ); break;
      case 2: puts( "Excellent!" ); break;
      case 3: puts( "Nice work!" ); break;
      case 4: puts( "Keep up the good work!" ); break;

   } else switch ( number ) {

      case 1: puts( "No. Please try again." ); break;
      case 2: puts( "Wrong. Try once more." ); break;
      case 3: puts( "Don't give up!" ); break;
      case 4: puts( "No. Keep trying." ); break;
   }
}