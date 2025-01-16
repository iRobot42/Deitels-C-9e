// ex_03_20.c
// Salary Calculator

#include <stdio.h>

int main( void ) {

   int hours = 0;

   while ( hours != -1 ) {

      printf( "%s", "Enter # of hours worked (-1 to end): " );
      scanf_s( "%d", &hours );

      if ( hours != -1 ) {

         float rate = 0.0f;

         printf( "%s", "Enter hourly rate of the worker ($00.00): " );
         scanf_s( "%f", &rate );

         float salary = hours * rate;

         if ( hours > 40 )
            salary += ( hours - 40 ) * rate * 0.5f;

         printf( "Salary is $%.2f\n\n", salary );
      }
   }
}