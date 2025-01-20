// ex_05_14.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ) {

   srand(( unsigned )time( NULL ));

   printf( "%d\n", 2 + rand() % 5 * 2 ); // a
   printf( "%d\n", 3 + rand() % 5 * 2 ); // b
   printf( "%d\n", 6 + rand() % 5 * 4 ); // c
}