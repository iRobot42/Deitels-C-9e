// ex_03_35.c
// Printing the Decimal Equivalent of a Binary Number

#include <stdio.h>

int main( void ) {

   int binary = 0;
   int decimal = 0;
   int pos_value = 1;
   int error = 0;

   printf( "%s", "Binary number: " );
   scanf_s( "%d", &binary );

   while ( binary != 0 ) {

      int bit = binary % 10;

      if ( bit > 1 ) {

         error = 1;
         binary = 0;

      } else {

         decimal += bit * pos_value;
         pos_value *= 2;
         binary /= 10;
      }
   }

   if ( error == 1 ) puts( "Invalid number!" );
   else printf( "Decimal equivalent is %d\n", decimal );
}