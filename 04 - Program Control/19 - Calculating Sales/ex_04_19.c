// ex_04_19.c
// Calculating Sales

#include <stdio.h>

int main( void ) {

   int product = -1;
   double total = 0.0;

   while ( product != 0 ) {

      printf( "%s", "Product number [1..5] (0 to end): " );
      scanf_s( "%d", &product );

      if ( product < 1 || product > 5 )
         continue;

      int quantity = -1;

      while ( quantity < 0 ) {
         printf( "%s", "Quantity sold: " );
         scanf_s( "%d", &quantity );
      }

      switch ( product ) {
         case 1: total += quantity * 2.98; break;
         case 2: total += quantity * 4.50; break;
         case 3: total += quantity * 9.98; break;
         case 4: total += quantity * 4.49; break;
         case 5: total += quantity * 6.87; break;
      }

      puts( "" );
   }

   printf( "\nTotal retail value is $%.2lf\n", total );
}