// ex_02_18.c
// Comparing Integers

#include <stdio.h>

int main( void ) {

   int number1, number2;

   printf( "%s", "Two integer numbers: " );
   scanf( "%d %d", &number1, &number2 );

   if ( number1 > number2 )
      printf( "%d is larger\n", number1 );

   if ( number2 > number1 )
      printf( "%d is larger\n", number2 );

   if ( number1 == number2 )
      puts( "These numbers are equal" );
}