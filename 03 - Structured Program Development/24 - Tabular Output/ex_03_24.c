// ex_03_24.c
// Tabular Output

#include <stdio.h>

int main( void ) {

   puts( "N\t10*N\t100*N\t1000*N\n" );

   int n = 0;

   while ( n++ < 10 )
      printf( "%d\t%d\t%d\t%d\n", n, 10 * n, 100 * n, 1000 * n );
}