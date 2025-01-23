// ex_05_34.c
// Recursive Exponentiation

#include <stdio.h>

long power( int, int );

int main( void ) {

   int b, e;

   do {
      printf( "%s: ", "Base and exponent" );
      scanf_s( "%d %d", &b, &e );
   } while ( e < 1 );

   printf( "Function power returns %ld\n", power( b, e ));
}

long power( int base, int exponent ) {
   return exponent > 1 ? base * power( base, --exponent ) : base;
}