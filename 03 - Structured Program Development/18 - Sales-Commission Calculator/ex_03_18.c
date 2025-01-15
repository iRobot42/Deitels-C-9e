// ex_03_18.c
// Sales-Commission Calculator

#include <stdio.h>

int main( void ) {

   float sales = 0.00f;

   while ( sales != -1.0f ) {

      printf( "%s", "Enter sales in dollars (-1 to end): " );
      scanf_s( "%f", &sales );

      if ( sales != -1.0f )
         printf( "Salary is: $%.2f\n\n", 200.00f + sales * 0.09f );
   }
}