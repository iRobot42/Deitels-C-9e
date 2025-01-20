// ex_04_40.c
// World Population Growth

#include <stdio.h>

int main( void ) {

   double wp = 8161.972; // world population, mil
   double ypg = 69.640; // yearly population growth, mil
   double gr = ypg / wp; // growth rate

   printf( "Growth rate is %.2lf %%\n", gr * 100 );
   puts( "\nYear\tAWP(b)\tGrowth(m)" );
   puts( "-------------------------" );

   int year = 2024;

   while ( year++ <= 2024 + 75 ) {

      double awp = wp + wp * gr; // anticipated world population
      double growth = awp - wp;

      printf( "%d\t%.2lf\t%.2lf\n", year, awp / 1000, growth );

      wp = awp;
   }
}