// ex_03_38.c
// Counting 7s

#include <stdio.h>

int main( void ) {

   int N = 100000;
   int number = N;
   int sevens = 0;

   while ( number == N ) {

      printf( "%s", "Number (up to 5 digits): " );
      scanf_s( "%d", &number );

      if ( number < -99999 )
         number = N;
      else if ( number > 99999 )
         number = N;
   }

   if ( number < 0 )
      number = -number;

   while ( number != 0 ) {
      if ( number % 10 == 7 )
         ++sevens;
      number /= 10;
   }

   printf( "7s: %d\n", sevens );
}