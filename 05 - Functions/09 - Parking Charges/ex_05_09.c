// ex_05_09.c
// Parking Charges

#include <math.h>
#include <stdio.h>

double calculateCharges( double );

int main( void ) {

   double total_hours = 0.0;
   double total_charges = 0.00;

   printf( "%s: ", "Parking hours (three cars)" );

   for ( int car = 1; car <= 3; ++car ) {

      double hours = 0.0;
      scanf_s( "%lf", &hours );
      total_hours += hours;

      double charge = calculateCharges( hours );
      total_charges += charge;

      if ( car == 1 )
         puts( "\nCar\tHours\tCharge" );

      printf( "%-5d %7.1f %8.2f\n", car, hours, charge );
   }

   printf( "TOTAL %7.1f %8.2f\n", total_hours, total_charges );
}

double calculateCharges( double time ) {

   double charge = 2.00;

   if ( time > 3.0 )
      charge += ceil( time - 3.0 ) * 0.50;

   return charge > 10.00 ? 10.00 : charge;
}