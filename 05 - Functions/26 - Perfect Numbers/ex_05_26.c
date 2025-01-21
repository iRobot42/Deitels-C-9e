// ex_05_26.c
// Perfect Numbers

#include <stdio.h>

int isPerfect( int );
void showDivisors( int );

int main( void ) {

   puts( "Perfect numbers between 1 and 1000" );

   for ( int number = 1; number <= 1000; ++number )
      if ( isPerfect( number ))
         showDivisors( number );
}

int isPerfect( int num ) {

   int sum = 0;

   for ( int i = 1; i <= num / 2; ++i )
      if (!( num % i ))
         sum += i;

   return num == sum;
}

void showDivisors( int num ) {

   printf( "%d = 1", num );

   for ( int i = 2; i <= num / 2; ++i )
      if (!( num % i ))
         printf( " + %d", i );

   puts( "" );
}