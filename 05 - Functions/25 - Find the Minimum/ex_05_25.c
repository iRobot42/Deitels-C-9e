// ex_05_25.c
// Find the Minimum

#include <stdio.h>

double min3( double, double, double );

int main( void ) {

   double a, b, c;
   printf( "%s: ", "Three double numbers" );
   scanf_s( "%lf %lf %lf", &a, &b, &c );

   printf( "The smallest is %lf\n", min3( a, b, c ));
}

double min3( double d1, double d2, double d3 ) {
   if ( d2 < d1 ) d1 = d2;
   return d3 < d1 ? d3 : d1;
}