// ex_02_23.c
// Multiples

#include <stdio.h>

int main( void ) {

   int number1, number2;

   printf( "%s", "Two integer numbers: " );
   scanf( "%d %d", &number1, &number2 );

   printf( "%d is ", number1 );
   if ( number1 % number2 != 0 ) printf( "%s", "not " );
   printf( "a multiple of %d\n", number2 );
}