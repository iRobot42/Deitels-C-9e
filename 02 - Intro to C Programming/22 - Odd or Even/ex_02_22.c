// ex_02_22.c
// Odd or Even

#include <stdio.h>

int main( void ) {

   int number;

   printf( "%s", "Integer number: " );
   scanf( "%d", &number );

   number = number % 2;

   if ( number == 0 ) puts( "It's even" );
   if ( number != 0 ) puts( "It's odd" );
}