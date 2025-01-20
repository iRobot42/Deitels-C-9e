// ex_05_18.c
// Even or Odd

#include <stdio.h>

int isEven( int );

int main( void ) {

   for ( int i = 1; i <= 5; ++i ) {

      int n;
      printf( "%s: ", "Number" );
      scanf_s( "%d", &n );

      puts( isEven( n ) ? "Even\n" : "Odd\n" );
   }
}

int isEven( int number ) {
   return !( number % 2 );
}