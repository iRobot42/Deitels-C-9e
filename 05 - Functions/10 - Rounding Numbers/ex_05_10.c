// ex_05_10.c
// Rounding Numbers

#include <math.h>
#include <stdio.h>

int main( void ) {

   printf( "%s: ", "Five numbers" );

   for ( int i = 1; i <= 5; ++i ) {

      double x;
      scanf_s( "%lf", &x );

      if ( i == 1 ) {
         puts( "\nOriginal\tRounded" );
         puts( "-----------------------" );
      }

      double y = floor( x + 0.5 );
      printf( "%.10f\t%.1f\n", x, y );
   }
}