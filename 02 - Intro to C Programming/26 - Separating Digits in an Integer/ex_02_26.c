// ex_02_26.c
// Separating Digits in an Integer

#include <stdio.h>

int main( void ) {

   int number;

   printf( "%s", "Five-digit number: " );
   scanf( "%d", &number );

   int d5 = number % 10;  number = number / 10;
   int d4 = number % 10;  number = number / 10;
   int d3 = number % 10;  number = number / 10;
   int d2 = number % 10;  number = number / 10;
   int d1 = number % 10;  number = number / 10;

   printf( "%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5 );
}