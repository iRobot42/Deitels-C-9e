// ex_05_13.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ) {

   srand(( unsigned )time( NULL ));

   for ( int i = 1; i <= 100; ++i )
      printf( "%d\n", -3 + rand() % 15 );

      // a:     1 + rand() % 2
      // b:     1 + rand() % 100
      // c:     0 + rand() % 10
      // d:  1000 + rand() % 113
      // e:    -1 + rand() % 3
      // f:    -3 + rand() % 15
}