// ex_04_15.c
// Modified Compound-Interest Program

#include <math.h>
#include <stdio.h>

int main( void ) {

   double principal = 1000.0;

   printf( "%s", "Year" );

   for ( int percent = 5; percent <= 10; ++percent )
      printf( " %7d%%", percent );

   puts( "\n----------------------------------------------------------" );

   for ( int year = 1; year <= 10; ++year ) {

      printf( "%4d", year );

      for ( double rate = 0.05; rate <= 0.10; rate += 0.01 )
         printf( " %8.2lf", principal * pow( 1.0 + rate, year ));

      puts( "" );
   }
}