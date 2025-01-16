// ex_03_23.c
// Find the Largest Number

#include <limits.h>
#include <stdio.h>

int main( void ) {

   int counter = 0;
   int largest = INT_MIN;

   while ( counter++ < 10 ) {

      int number = 0;

      printf( "Number %d: ", counter );
      scanf_s( "%d", &number );

      if ( number > largest )
         largest = number;
   }

   printf( "\nLargest number is %d\n", largest );
}