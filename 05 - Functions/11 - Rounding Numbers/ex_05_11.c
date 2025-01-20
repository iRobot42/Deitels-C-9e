// ex_05_11.c
// Rounding Numbers

#include <math.h>
#include <stdio.h>

double roundToInteger( double );
double roundToTenths( double );
double roundToHundreths( double );
double roundToThousandthss( double );

int main( void ) {

   for ( int i = 1; i <= 3; ++i ) {

      double number;
      printf( "%s: ", "Number" );
      scanf_s( "%lf", &number );

      printf( "\nOriginal value:     %.5f", number );
      printf( "\nNearest integer:    %.0f", roundToInteger( number ));
      printf( "\nNearest tenth:      %.1f", roundToTenths( number ));
      printf( "\nNearest hundredth:  %.2f", roundToHundreths( number ));
      printf( "\nNearest thousandth: %.3f", roundToThousandthss( number ));

      puts( "\n" );
   }
}

double roundToInteger( double x ) {
   return floor( x + 0.5 );
}

double roundToTenths( double x ) {
   return floor( x * 10.0 + 0.5 ) / 10.0;
}

double roundToHundreths( double x ) {
   return floor( x * 100.0 + 0.5 ) / 100.0;
}

double roundToThousandthss( double x ) {
   return floor( x * 1000.0 + 0.5 ) / 1000.0;
}