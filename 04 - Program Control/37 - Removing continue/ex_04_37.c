// ex_04_37.c
// Removing continue

#include <stdio.h>

int main( void ) {

   for ( int x = 1; x <= 10; ++x )
      if ( x != 5 )
         printf( "%d ", x );

   puts( "\nUsed inequality to skip printing the value 5" );
}