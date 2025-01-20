// ex_05_15.c
// Hypotenuse Calculations

#include <math.h>
#include <stdio.h>

double hypotenuse( double, double );

int main( void ) {

   printf( "1: %f\n", hypotenuse( 3.0, 4.0 ));
   printf( "2: %f\n", hypotenuse( 5.0, 12.0 ));
   printf( "3: %f\n", hypotenuse( 8.0, 15.0 ));
}

double hypotenuse( double side1, double side2 ) {
   return sqrt( side1 * side1 + side2 * side2 );
   // or: hypot( side1, side2 );
}