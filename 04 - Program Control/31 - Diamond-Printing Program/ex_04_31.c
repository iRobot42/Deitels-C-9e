// ex_04_31.c
// Diamond-Printing Program

#include <stdio.h>

int main( void ) {

   int spaces = 4;
   int asterisks = 1;

   for ( int row = 1; row <= 9; ++row ) {

      for ( int i = 1; i <= spaces; ++i )
         printf( "%c", ' ' );

      for ( int i = 1; i <= asterisks; ++i )
         printf( "%c", '*' );

      if ( row < 5 ) {
         --spaces;
         asterisks += 2;
      } else {
         ++spaces;
         asterisks -= 2;
      }

      puts( "" );
   }
}