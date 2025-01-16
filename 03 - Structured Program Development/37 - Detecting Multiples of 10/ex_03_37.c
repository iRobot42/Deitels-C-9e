// ex_03_37.c
// Detecting Multiples of 10

#include <stdio.h>

int main( void ) {

   int i = 0;
   while ( i++ < 100 ) {
      printf( "%s", "*" );
      if ( i % 10 == 0 )
         puts( "" );
   }
}