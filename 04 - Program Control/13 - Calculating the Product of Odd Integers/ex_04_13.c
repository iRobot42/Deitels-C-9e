// ex_04_13.c
// Calculating the Product of Odd Integers

#include <stdio.h>

int main( void ) {

   int product = 1;

   for ( int num = 1; num <= 15; num += 2 )
      product *= num;

   printf( "The product is %d\n", product );
}