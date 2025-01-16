// ex_03_41.c
// Diameter, Circumference and Area of a Circle

#include <stdio.h>

int main( void ) {

   double r = 0.0;
   double pi = 3.14159;

   printf( "%s", "Radius of a circle: " );
   scanf_s( "%lf", &r );

   printf( "\nDiameter is %lf\n", 2 * r );
   printf( "Circumference is %lf\n", 2 * pi * r );
   printf( "Area is %lf\n", pi * r * r );
}