// ex_04_16.c
// Triangle-Printing Program

#include <stdio.h>

int main( void ) {

   for ( int i = 1; i <= 10; ++i ) {
      for ( int j = 1; j <= i; ++j )
         printf( "%s", "*" );
      puts( "" );
   }
   puts( "" );

   for ( int i = 1; i <= 10; ++i ) {
      for ( int j = 10; j >= i; --j )
         printf( "%s", "*" );
      puts( "" );
   }
   puts( "" );

   for ( int i = 1; i <= 10; ++i ) {
      for ( int j = 1; j <= 10; ++j )
         printf( "%s", j < i ? " " : "*" );
      puts( "" );
   }
   puts( "" );

   for ( int i = 1; i <= 10; ++i ) {
      for ( int j = 10; j >= 1; --j )
         printf( "%s", j > i ? " " : "*" );
      puts( "" );
   }
}