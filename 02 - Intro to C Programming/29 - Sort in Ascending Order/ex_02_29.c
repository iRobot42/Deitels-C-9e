// ex_02_29.c
// Sort in Ascending Order

#include <stdio.h>

int main( void ) {

   int number1, number2, number3;

   printf( "%s", "Three integer numbers: " );
   scanf( "%d %d %d", &number1, &number2, &number3 );

   if ( number2 < number1 ) {
      int temp = number1;
      number1 = number2;
      number2 = temp;
   }
   if ( number3 < number2 ) {
      int temp = number2;
      number2 = number3;
      number3 = temp;
      if ( number2 < number1 ) {
         temp = number1;
         number1 = number2;
         number2 = temp;
      }
   }

   printf( "Sorted: %d %d %d\n", number1, number2, number3 );
}