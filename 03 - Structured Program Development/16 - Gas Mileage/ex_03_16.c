// ex_03_16.c
// Gas Mileage

#include <stdio.h>

int main( void ) {

   float gallons = 0.0f;
   float gallons_total = 0.0f;

   int miles = 0;
   int miles_total = 0;

   while ( gallons != -1.0f ) { // or: gallons > -1.0f

      printf( "%s", "Enter the gallons used (-1 to end): " );
      scanf_s( "%f", &gallons );

      if ( gallons != -1.0f ) {

         printf( "%s", "Enter the miles driven: " );
         scanf_s( "%d", &miles );

         miles_total += miles;
         gallons_total += gallons;

         printf( "The miles/gallon for this tank was %f\n\n",
            gallons == 0.0f ? 0.0f : miles / gallons );
      }
   }

   printf( "\nThe overall average miles/gallon was %f\n",
      gallons_total == 0.0f ? 0.0f : miles_total / gallons_total );
}