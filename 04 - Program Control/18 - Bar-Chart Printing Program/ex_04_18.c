// ex_04_18.c
// Bar-Chart Printing Program

#include <stdio.h>

int main( void ) {

   printf( "%s", "Five numbers between 1 and 30: " );

   for ( int n = 1; n <= 5; ++n ) {

      int num = 0;

      scanf_s( "%d", &num );
      printf( "%3d: ", num );

      if ( num < 1 || num > 30 )
         printf( "%s", "Out of range!" );
      else while ( num-- )
         printf( "%c", '*' );

      puts( "" );
   }
}