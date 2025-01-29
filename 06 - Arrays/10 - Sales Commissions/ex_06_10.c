// ex_06_10.c
// Sales Commissions

#include <stdio.h>

int main( void ) {

   puts( "Weekly gross sales (-1 to end):" );

   int counters[ 9 ] = { 0 };
   double gross_sales;

   while ( 1 ) {

      printf( "%c ", '>' );
      scanf_s( "%lf", &gross_sales );
      if ( gross_sales < 0 ) break;

      double salary = 200 + gross_sales * 0.09;

      if ( salary >= 1000 ) ++counters[ 8 ];
      else ++counters[ ( size_t )( salary ) / 100 - 2 ];
   }

   puts( "\nSalary range\tCounter\n-----------------------" );
   for ( size_t counter = 0; counter < 8; ++counter )
      printf( "$%zu00-%zu99\t%d\n", counter + 2, counter + 2,
         counters[ counter ] );
   printf( "$1000 and over\t%d\n", counters[ 8 ] );
}