// ex_04_26.c
// Calculating the Value of Pi

#include <stdio.h>

int main( void ) {

   int accuracy = 0;

   printf( "%s: ", "Accuracy" );
   scanf_s( "%d", &accuracy );

   printf( "\n%s\t%s\n", "Term", "Pi" );
   puts( "----------------" );

   double pi = 0.0;
   double numerator = 4.0;
   double denominator = 1.0;

   for ( int term = 1; term <= accuracy; ++term ) {

      pi += numerator / denominator;
      numerator = -numerator;
      denominator += 2;

      printf( "%d\t%lf\n", term, pi );
   }
}