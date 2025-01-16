// ex_03_34.c
// Palindrome Tester

#include <stdio.h>

int main( void ) {

   int number = 0;

   while ( number == 0 ) {

      printf( "%s", "Five-digit number: " );
      scanf_s( "%d", &number );

      if ( number < 10000 ) number = 0;
      else if ( number > 99999 ) number = 0;
   }

   if ( number % 10 == number / 10000 )
      if ( number / 10 % 10 == number / 1000 % 10 )
         puts( "Palindrome!" );
}