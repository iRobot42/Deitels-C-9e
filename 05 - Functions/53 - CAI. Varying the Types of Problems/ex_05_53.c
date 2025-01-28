// ex_05_53.c
// Computer-Assisted Instruction: Varying the Types of Problems

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int operation( int, int, int );
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

      puts( "Types of arithmetic problem:" );
      puts( "1 - addition" );
      puts( "2 - subtraction" );
      puts( "3 - multiplication" );
      puts( "4 - random mixture" );

      int type;
      do {
         printf( "%s: ", "Type" );
         scanf_s( "%d", &type );
      } while ( type < 1 || type > 4 );

      int correct = 0;

      for ( int attempt = 1; attempt <= 10; ++attempt ) {

         int n1 = random( level );
         int n2 = random( level );
         int result = operation( type, n1, n2 );

         int answer;
         scanf_s( "%d", &answer );

         if ( answer == result )
            ++correct;

         comment( answer == result );
      }

      puts( correct >= 7.5
         ? "Congratulations, you are ready to go to the next level!"
         : "Please ask your teacher for extra help." );
      puts( "" );
   }
}

int operation( int op, int a, int b ) {

   if ( op == 4 )
      op = 1 + rand() % 3;

   switch ( op ) {
      case 1: printf( "%d + %d = ", a, b ); return a + b;
      case 2: printf( "%d - %d = ", a, b ); return a - b;
      case 3: printf( "%d * %d = ", a, b ); return a * b;
      default: return 0;
   }
}

int random( int difficulty ) {
   return 1 + rand() % ( int )( pow( 10, difficulty ) - 1 );
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