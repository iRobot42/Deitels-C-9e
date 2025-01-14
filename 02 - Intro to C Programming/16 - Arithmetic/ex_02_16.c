// ex_02_16.c
// Arithmetic

#include <stdio.h>

int main( void ) {

   int number1, number2;

   printf( "%s", "Two numbers: " );
   scanf( "%d %d", &number1, &number2 );

   printf( "Sum is %d\n", number1 + number2 );
   printf( "Product is %d\n", number1 * number2 );
   printf( "Difference is %d\n", number1 - number2 );

   if ( number2 != 0 ) {
      printf( "Quotient is %d\n", number1 / number2 );
      printf( "Remainder is %d\n", number1 % number2 );
   }
}