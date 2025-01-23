// ex_05_35.c
// Fibonacci

#include <stdio.h>

unsigned long long fibonacci( int );

int main( void ) {

   for ( int num = 0; num <= 10; ++num )
      printf( "fibonacci( %d ) is %llu\n", num, fibonacci( num ));

   printf( "...\nfibonacci( 93 ) is %llu\n", fibonacci( 93 ));
}

unsigned long long fibonacci( int n ) {

   unsigned long long fib = 0;
   unsigned long long next = 1;
   unsigned long long sum = 1;

   while ( n-- ) {
      sum = fib + next;
      fib = next;
      next = sum;
   }

   return fib;
}