// ex_05_50.c
// Computer-Assisted Instruction: Reducing Student Fatigue

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand9( void );
void comment( int );

int main( void ) {

   srand(( unsigned )time( NULL ));

   puts( "Enter -1 to end." );

   int answer = 0;

   while( answer != -1 ) {

      int n1 = rand9();
      int n2 = rand9();
      int correct = n1 * n2;

      do {

         printf( "How much is %d times %d? ", n1, n2 );
         scanf_s( "%d", &answer );

         if ( answer == -1 )
            break;

         comment( answer == correct );

      } while ( answer != correct );
   }
}

int rand9( void ) {
   return rand() % 10;
}

void comment( int is_correct ) {

   int number = 1 + rand() % 4;

   if ( is_correct )
      switch ( number ) {
         case 1: puts( "Very good!" ); break;
         case 2: puts( "Excellent!" ); break;
         case 3: puts( "Nice work!" ); break;
         case 4: puts( "Keep up the good work!" ); break;
      }
   else
      switch ( number ) {
         case 1: puts( "No. Please try again." ); break;
         case 2: puts( "Wrong. Try once more." ); break;
         case 3: puts( "Don't give up!" ); break;
         case 4: puts( "No. Keep trying." ); break;
      }
}