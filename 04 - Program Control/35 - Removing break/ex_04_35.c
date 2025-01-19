// ex_04_35.c
// Removing break

#include <stdio.h>

int main( void ) {

   int x = 0;
   int flag = 1;

   for ( x = 1; flag && x <= 10; ++x )
      if ( x == 5 ) {
         flag = 0;
         --x;
      } else printf( "%d ", x );

   printf( "\nBroke out of loop at x == %d\n", x );
}