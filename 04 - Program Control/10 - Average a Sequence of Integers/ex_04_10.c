// ex_04_10.c
// Average a Sequence of Integers

#include <stdio.h>

int main( void ) {

   int sentinel = 9999;
   int number = 0;
   int count = -1;
   long sum = -sentinel;

   printf( "Sequence (%d at the end):\n> ", sentinel );

   while ( number != sentinel ) {
      scanf_s( "%d", &number );
      sum += number;
      ++count;
   }

   if ( count == 0 ) puts( "The sequence is empty" );
   else printf( "Average is %lf\n", ( double )sum / count );
}