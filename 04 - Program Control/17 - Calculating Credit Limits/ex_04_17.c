// ex_04_17.c
// Calculating Credit Limits

#include <stdio.h>

int main( void ) {

   for ( int i = 1; i <= 3; ++i ) {

      int account = 0;
      int limit = 0;
      int balance = 0;

      printf( "%s", "Account number: " );
      scanf_s( "%d", &account );
      printf( "%s", "Credit limit: $" );
      scanf_s( "%d", &limit );
      printf( "%s", "Current balance: $" );
      scanf_s( "%d", &balance );

      printf( "New credit limit is $%d\n", limit /= 2 );
      puts( balance > limit ? "Credit limit exceeded!\n" : "" );
   }
}