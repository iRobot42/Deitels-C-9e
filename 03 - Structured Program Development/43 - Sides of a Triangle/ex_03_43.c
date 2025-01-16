// ex_03_43.c
// Sides of a Triangle

#include <stdio.h>

int main( void ) {

   int side1, side2, side3;

   printf( "%s", "Three nonzero integers: " );
   scanf_s( "%d %d %d", &side1, &side2, &side3 );
   // correct input data is assumed

   if ( side1 < side2 + side3 )
      if ( side2 < side1 + side3 )
         if ( side3 < side1 + side2 )
            puts( "Triangle" );
}