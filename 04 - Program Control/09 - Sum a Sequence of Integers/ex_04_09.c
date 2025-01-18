// ex_04_09.c
// Sum a Sequence of Integers

#include <stdio.h>

int main( void ) {

   int count = 0;
   long sum = 0;

   printf( "%s", "Sequence: " );
   scanf_s( "%d", &count );

   if ( count < 0 )
      count = 0;

   while ( count-- ) {
      int num = 0;
      scanf_s( "%d", &num );
      sum += num;
   }

   printf( "Sum is %ld\n", sum );
}