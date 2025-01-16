// ex_03_26.c
// Find the Two Largest Numbers

#include <limits.h>
#include <stdio.h>

int main( void ) {

   int counter = 0;
   int largest1 = INT_MIN;
   int largest2 = INT_MIN;

   while ( counter++ < 10 ) {

      int number = 0;

      printf( "Number %d: ", counter );
      scanf_s( "%d", &number );

      if ( number > largest2 ) {
         largest1 = largest2;
         largest2 = number;
      } else if ( number > largest1 )
         largest1 = number;
   }

   printf( "\nLargest numbers are %d and %d\n", largest1, largest2 );
}