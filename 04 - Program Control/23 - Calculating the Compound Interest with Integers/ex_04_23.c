// ex_04_23.c
// Calculating the Compound Interest with Integers

#include <stdio.h>

int main( void ) {

   int amount = 1000'00;
   int rate = 5;

   printf( "%4s%21s\n", "Year", "Amount on deposit" );

   for ( int year = 1; year <= 10; ++year ) {

      amount += amount * rate / 100;

      int dollars = amount / 100;
      int cents = amount % 100;

      printf( "%4d%18d.%02d\n", year, dollars, cents );
   }
}