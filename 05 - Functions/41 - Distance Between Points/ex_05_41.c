// ex_05_41.c
// Distance Between Points

#include <math.h>
#include <stdio.h>

double distance( double, double, double, double );

int main( void ) {

   double ax, ay, bx, by;

   printf( "%s: ", "1st point" );
   scanf_s( "%lf %lf", &ax, &ay );
   printf( "%s: ", "2nd point" );
   scanf_s( "%lf %lf", &bx, &by );

   printf( "Distance is %lf\n", distance( ax, ay, bx, by ));
}

double distance( double x1, double y1, double x2, double y2 ) {
   return hypot( x1 - x2, y1 - y2 );
}