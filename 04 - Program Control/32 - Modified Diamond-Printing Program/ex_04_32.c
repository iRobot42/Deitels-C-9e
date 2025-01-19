// ex_04_32.c
// Modified Diamond-Printing Program

#include <stdio.h>

int main( void ) {

   int rows;
   do {
      printf( "%s: ", "Number of rows (1-19, odd)" );
      scanf_s( "%d", &rows );
   } while ( rows < 1 || rows > 19 || rows % 2 == 0 );

   int half = rows / 2;
   int spaces = half;
   int asterisks = 1;

   for ( int row = 1; row <= rows; ++row ) {

      for ( int i = 1; i <= spaces; ++i )
         printf( "%c", ' ' );

      for ( int i = 1; i <= asterisks; ++i )
         printf( "%c", '*' );

      if ( row <= half ) {
         --spaces;
         asterisks += 2;
      } else {
         ++spaces;
         asterisks -= 2;
      }

      puts( "" );
   }
}