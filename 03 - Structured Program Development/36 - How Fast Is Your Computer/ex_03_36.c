// ex_03_36.c
// How Fast Is Your Computer?

#include <stdio.h>

int main( void ) {

   int counter = 0;
   while ( counter++ < 1000000000 )
      if ( counter % 100000000 == 0 )
         printf( "%d\n", counter );
}