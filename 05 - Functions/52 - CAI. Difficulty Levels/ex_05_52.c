// ex_05_52.c
// Computer-Assisted Instruction: Difficulty Levels

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random( int );
void comment( int );

int main( void ) {

   srand(( unsigned )time( NULL ));

   int level = 1;
   while ( level ) {

      do {
         printf( "%s: ", "Difficulty (1-4), 0 to end" );
         scanf_s( "%d", &level );
      } while ( level < 0 || level > 4 );

      if ( !level ) break;

      int attempts = 10;
      int correct = 0;

      for ( int attempt = 1; attempt <= attempts; ++attempt ) {

         int n1 = random( level );
         int n2 = random( level );

         int answer = 0;
         printf( "How much is %d times %d? ", n1, n2 );
         scanf_s( "%d", &answer );

         int is_right = answer == n1 * n2;

         if ( is_right )
            ++correct;

         comment( is_right );
      }

      puts( correct >= attempts * 0.75
         ? "Congratulations, you are ready to go to the next level!"
         : "Please ask your teacher for extra help." );
      puts( "" );
   }
}

int random( int difficulty ) {
   return rand() % ( int )pow( 10, difficulty );
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