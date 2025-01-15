// ex_02_19.c
// Arithmetic, Largest Value and Smallest Value

#include <stdio.h>

int main( void ) {

   int number1, number2, number3;

   printf( "%s", "Enter three different integers: " );
   scanf( "%d %d %d", &number1, &number2, &number3 );

   int min = number1;
   int max = number1;

   if ( number2 < min ) min = number2;
   if ( number3 < min ) min = number3;

   if ( number2 > max ) max = number2;
   if ( number3 > max ) max = number3;

   printf( "Sum is %d\n", number1 + number2 + number3 );
   printf( "Average is %d\n", ( number1 + number2 + number3 ) / 3 );
   printf( "Product is %d\n", number1 * number2 * number3 );
   printf( "Smallest is %d\n", min );
   printf( "Largest is %d\n", max );
}