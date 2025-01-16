// ex_03_45.c
// Factorial

#include <stdio.h>

int main( void ) {

   { // a

      int n = 0;
      int nf = 1;

      printf( "%s", "n: " );
      scanf_s( "%d", &n );
      // correct data is assumed

      printf( "%d! = ", n );

      while ( n > 1 )
         nf *= n--;

      printf( "%d\n", nf );
   }

   { // b

      int n = 0;
      int nf = 1;
      int a = 9; // accuracy

      double e = 1.0;

      while ( ++n <= a ) {
         nf *= n;
         e += 1.0 / nf;
      }

      printf( "\ne = %lf\n", e );
   }

   { // c

      int n = 0;
      int nf = 1;
      int a = 11;
      int x = 0;

      double ex = 1.0;
      double xn = 1.0;

      printf( "%s", "\nx: " );
      scanf_s( "%d", &x );
      // correct data is assumed

      while ( ++n <= a ) {
         xn *= x;
         nf *= n;
         ex += xn / nf;
      }

      printf( "e^%d = %lf\n", x, ex );
   }
}