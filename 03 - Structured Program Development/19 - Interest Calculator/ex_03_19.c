// ex_03_19.c
// Interest Calculator

#include <stdio.h>

int main( void ) {

   float principal = 0.00f;

   while ( principal != -1.0f ) {

      printf( "%s", "Enter loan principal (-1 to end): " );
      scanf_s( "%f", &principal );

      if ( principal != -1.0f ) {

         float rate = 0.0f;
         int days = 0;

         printf( "%s", "Enter interest rate: " );
         scanf_s( "%f", &rate );
         printf( "%s", "Enter term of the loan in days: " );
         scanf_s( "%d", &days );

         printf( "The interest charge is $%.2f\n\n",
            principal * rate * days / 365 );
      }
   }
}