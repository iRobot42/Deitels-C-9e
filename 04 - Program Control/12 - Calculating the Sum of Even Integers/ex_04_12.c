// ex_04_12.c
// Calculating the Sum of Even Integers

#include <stdio.h>

int main( void ) {

   int sum = 0;

   for ( int num = 2; num <= 30; num += 2 )
      sum += num;

   printf( "The sum is %d\n", sum );
}