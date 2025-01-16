// ex_03_21.c
// Predecrementing vs. Postdecrementing

#include <stdio.h>

int main( void ) {

   int number = 0;

   printf( "Before decrement: %d\n", number );
   printf( "Predecrementing: %d\n", --number );
   printf( "After decrement: %d\n\n", number );

   number = 0;

   printf( "Before decrement: %d\n", number );
   printf( "Postdecrementing: %d\n", number-- );
   printf( "After decrement: %d\n", number );
}