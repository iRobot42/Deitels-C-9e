// ex_03_25.c
// Tabular Output

#include <stdio.h>

int main( void ) {

   puts( "A\tA+2\tA+4\tA+6\n" );

   int a = 0;

   while (( a += 3 ) <= 15 )
      printf( "%d\t%d\t%d\t%d\n", a, a + 2, a + 4, a + 6 );
}