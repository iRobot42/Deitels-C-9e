// ex_05_24.c
// Temperature Conversions

#include <stdio.h>

int toCelsius( int );
int toFahrenheit( int );
void printChart( int, int, int );

int main( void ) {

   puts( "Celsius to Fahrenheit:\n" );
   printChart( 0, 100, 1 );

   puts( "\nFahrenheit to Celsius:\n" );
   printChart( 32, 212, 0 );

   puts( "" );
}

int toCelsius( int f ) {
   return ( int )(( f - 32 ) / 1.8 );
}

int toFahrenheit( int c ) {
   return ( int )( c * 1.8 ) + 32;
}

void printChart( int from, int to, int is_celsius ) {
   for ( int degree = from; degree <= to; ++degree )
      printf( "%6d - %d%c", degree,
         ( is_celsius ? toFahrenheit : toCelsius )( degree ),
         degree % 5 ? '\t' : '\n' );
}