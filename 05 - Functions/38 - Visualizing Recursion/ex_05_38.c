// ex_05_38.c
// Visualizing Recursion

#include <stdio.h>

unsigned long long factorial( int );

int main( void ) {

   for ( int i = 0; i <= 10; ++i )
      printf( "%3d! = %llu\n\n", i, factorial( i ));
}

unsigned long long factorial( int number ) {

   printf( "%3d: ", number );

   if ( number < 2 ) {
      puts( "base case" );
      return 1;
   }

   printf( "recursive call (%d)\n", number - 1 );
   return number * factorial( number - 1 );
}