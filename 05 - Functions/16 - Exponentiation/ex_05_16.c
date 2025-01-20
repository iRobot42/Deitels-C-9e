// ex_05_16.c
// Exponentiation

#include <stdio.h>

long integerPower( int, unsigned );

int main( void ) {

   int b = 3;
   unsigned e = 4;

   printf( "integerPower( %d, %u ) == %ld\n",
      b, e, integerPower( b, e ));
}

long integerPower( int base, unsigned exponent ) {

   long value = 1;

   for ( exponent; exponent; --exponent )
      value *= base;

   return value;
}