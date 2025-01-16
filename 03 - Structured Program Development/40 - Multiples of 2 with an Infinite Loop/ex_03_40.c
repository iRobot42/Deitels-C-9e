// ex_03_40.c
// Multiples of 2 with an Infinite Loop

#include <stdio.h>

int main( void ) {

   int n = 1;

   while ( 1 )
      printf( "%d\n", n *= 2 );
}