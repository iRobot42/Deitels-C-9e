// ex_05_29.c
// Greatest Common Divisor

#include <stdio.h>

int gcd( int, int );

int main( void ) {

   int int1, int2;

   do {
      printf( "%s: ", "Two nonzero integer numbers" );
      scanf_s( "%d %d", &int1, &int2 );
   } while ( !int1 || !int2 );

   printf( "GCD is %d\n", gcd( int1, int2 ));
}

int gcd( int num1, int num2 ) {

   if ( num1 < 0 ) num1 = -num1;
   if ( num2 < 0 ) num2 = -num2;

   while ( num1 != num2 ) // Euclidean algorithm
      if ( num1 > num2 )
         num1 -= num2;
      else num2 -= num1;

   return num1;
}