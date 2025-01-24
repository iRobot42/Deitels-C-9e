// ex_05_49.c
// Computer-Assisted Instruction

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand9( void );

int main( void ) {

   srand(( unsigned )time( NULL ));

   puts( "Enter -1 to end." );

   int answer = 0;

   while ( answer != -1 ) {

      int n1 = rand9();
      int n2 = rand9();
      int correct = n1 * n2;

      do {

         printf( "How much is %d times %d? ", n1, n2 );
         scanf_s( "%d", &answer );

         if ( answer == -1 )
            break;

         puts( answer == correct ?
            "Very good!" : "No. Please try again." );

      } while ( answer != correct );
   }
}

int rand9( void ) {
   return rand() % 10;
}