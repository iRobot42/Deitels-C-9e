// ex_05_28.c
// Reversing Digits

#include <stdio.h>

int reverse( int );

int main( void ) {

   int number;
   printf( "%s: ", "Number" );
   scanf_s( "%d", &number );

   printf( "Reversed: %d\n", reverse( number ));
}

int reverse( int num ) {

   int rev = 0;

   do rev = rev * 10 + num % 10;
   while ( num /= 10 );

   return rev;
}