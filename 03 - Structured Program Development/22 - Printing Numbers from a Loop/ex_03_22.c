// ex_03_22.c
// Printing Numbers from a Loop

#include <stdio.h>

int main( void ) {

   int i = 0;

   while ( i < 10 )
      printf( "%d   ", ++i );

   puts( "" );
}