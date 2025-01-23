// ex_05_40.c
// Recursive main

#include <stdio.h>

int main( void ) {

   static int count = 1;
   printf( "%d\n", count++ );

   if ( count <= 10 )
      main();
}