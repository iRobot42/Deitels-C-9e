// ex_05_27.c
// Prime Numbers

#include <math.h>
#include <stdio.h>

int isPrime( int );

int main( void ) {

   puts( "Prime numbers between 2 and 10'000:" );

   for ( int n = 2; n <= 10'000; ++n )
      if ( isPrime( n ))
         printf( "%d ", n );

   puts( "" );
}

int isPrime( int num ) {

   int lim = ( int )sqrt( num );

   for ( int i = 2; i <= lim; ++i )
      if (!( num % i ))
         return 0;

   return 1;
}