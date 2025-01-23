// ex_05_39.c
// Recursive Greatest Common Divisor

#include <stdio.h>

int gcd( int, int );

int main( void ) {

   int a, b;
   printf( "%s: ", "Two numbers" );
   scanf_s( "%d %d", &a, &b );

   printf( "GCD is %d\n", gcd( a, b ));
}

int gcd( int x, int y ) {

   if ( x < 0 ) x = -x;
   if ( y < 0 ) y = -y;

   if ( x < y ) {
      int t = x;
      x = y;
      y = t;
   }

   return y ? gcd( y, x % y ) : x;
}