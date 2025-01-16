// ex_03_33.c
// Hollow Square of Asterisks

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
      while ( col++ < size ) {

         if ( col == size ) printf( "%s", "*\n" );
         else if ( col == 1 ) printf( "%s", "*" );
         else if ( row == 1 ) printf( "%s", "*" );
         else if ( row == size ) printf( "%s", "*" );
         else printf( "%s", " " );
      }
   }
}