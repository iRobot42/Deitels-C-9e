// ex_03_44.c
// Sides of a Right Triangle

#include <stdio.h>

int main( void ) {

   int a, b, c;

   printf( "%s", "Three nonzero integers: " );
   scanf_s( "%d %d %d", &a, &b, &c );
   // correct input data is assumed

   a *= a;
   b *= b;
   c *= c;

   if ( a == b + c )
      puts( "Right triangle" );
   else if ( b == a + c )
      puts( "Right triangle" );
   else if ( c == a + b )
      puts( "Right triangle" );
}