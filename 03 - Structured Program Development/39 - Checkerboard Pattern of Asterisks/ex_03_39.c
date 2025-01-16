// ex_03_39.c
// Checkerboard Pattern of Asterisks

#include <stdio.h>

int main( void ) {

   int row = 0;
   while ( row++ < 8 ) {

      if ( row % 2 == 0 )
         printf( "%s", " " );

      int col = 0;
      while ( col++ < 8 )
         printf( "%s", "* " );

      puts( "" );
   }
}