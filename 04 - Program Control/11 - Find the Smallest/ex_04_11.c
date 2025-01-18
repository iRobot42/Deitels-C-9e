// ex_04_11.c
// Find the Smallest

#include <limits.h>
#include <stdio.h>

int main( void ) {

   int count = 0;
   int smallest = INT_MAX;

   printf( "%s", "Sequence: " );
   scanf_s( "%d", &count );

   if ( count < 0 )
      count = 0;

   while ( count-- ) {
      int number = 0;
      scanf_s( "%d", &number );
      if ( number < smallest )
         smallest = number;
   }

   printf( "Smallest: %d\n", smallest );
}