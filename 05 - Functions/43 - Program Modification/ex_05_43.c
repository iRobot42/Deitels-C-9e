// ex_05_43.c

#include <stdio.h>

int mystery( int, int );

int main( void ) {

   int x = 0;
   int y = 0;

   printf( "%s: ", "Enter two integers" );
   scanf_s( "%d %d", &x, &y );

   printf( "The result is %d\n", mystery( x, y ));
}

int mystery( int a, int b ) {

   if ( b < 0 ) {
      b = -b;
      a = -a;
   }

   return b == 1 ? a : a + mystery( a, b - 1 );
}