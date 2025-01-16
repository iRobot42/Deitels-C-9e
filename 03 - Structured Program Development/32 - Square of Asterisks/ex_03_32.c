// ex_03_32.c
// Square of Asterisks

#include <stdio.h>

int main( void ) {

   int size = 0;

   while ( size == 0 ) {

      printf( "%s", "Size (1-20): " );
      scanf_s( "%d", &size );

      if ( size < 1 ) size = 0;
      else if ( size > 20 ) size = 0;
   }

   int row = 0;
   while ( row++ < size ) {

      int col = 0;
      while ( col++ < size )
         printf( "%s", "*" );

      puts( "" );
   }
}