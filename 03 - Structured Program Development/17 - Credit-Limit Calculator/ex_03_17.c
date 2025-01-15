// ex_03_17.c
// Credit-Limit Calculator

#include <stdio.h>

int main( void ) {

   int account_number = 0;

   while ( account_number != -1 ) {

      printf( "%s", "Enter account number (-1 to end): " );
      scanf_s( "%d", &account_number );

      if ( account_number != -1 ) {

         float beginning_balance = 0.0f;
         float total_charges = 0.0f;
         float total_credits = 0.0f;
         float credit_limit = 0.0f;

         printf( "%s", "Enter beginning balance: " );
         scanf_s( "%f", &beginning_balance );
         printf( "%s", "Enter total charges: " );
         scanf_s( "%f", &total_charges );
         printf( "%s", "Enter total credits: " );
         scanf_s( "%f", &total_credits );
         printf( "%s", "Enter credit limit: " );
         scanf_s( "%f", &credit_limit );

         float new_balance = beginning_balance + total_charges - total_credits;

         if ( new_balance > credit_limit ) {

            printf( "Account:      %d\n", account_number );
            printf( "Credit limit: %.2f\n", credit_limit );
            printf( "Balance:      %.2f\n", new_balance );
            puts( "Credit Limit Exceeded." );
         }

         puts( "" );
      }
   }
}