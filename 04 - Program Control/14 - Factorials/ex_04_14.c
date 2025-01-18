// ex_04_14.c
// Factorials

#include <stdio.h>

int main( void ) {

   int factorial = 1;

   printf( "%3s %11s\n", "n", "n!" );
   puts( "---------------" );

   for ( int n = 1; n <= 20; ++n )
      printf( "%3d %11d\n", n, factorial *= n );

   // On my system, int is limited to 4 bytes, which is not enough
   // to calculate the factorial for numbers greater than 12.
}