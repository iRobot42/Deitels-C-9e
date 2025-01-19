// ex_04_33.c
// Roman-Numeral Equivalent of Decimal Values

#include <stdio.h>

int main( void ) {

   puts( "Arabic\tRoman" );
   puts( "----------------" );

   for ( int num = 1; num <= 100; ++num ) {

      printf( "%d\t", num );

      switch ( num / 10 ) {
         case 1: printf( "%s", "X" ); break;
         case 2: printf( "%s", "XX" ); break;
         case 3: printf( "%s", "XXX" ); break;
         case 4: printf( "%s", "XL" ); break;
         case 5: printf( "%s", "L" ); break;
         case 6: printf( "%s", "LX" ); break;
         case 7: printf( "%s", "LXX" ); break;
         case 8: printf( "%s", "LXXX" ); break;
         case 9: printf( "%s", "XC" ); break;
         case 10: printf( "%s", "C" ); break; // 100
      }

      switch ( num % 10 ) {
         case 1: printf( "%s", "I" ); break;
         case 2: printf( "%s", "II" ); break;
         case 3: printf( "%s", "III" ); break;
         case 4: printf( "%s", "IV" ); break;
         case 5: printf( "%s", "V" ); break;
         case 6: printf( "%s", "VI" ); break;
         case 7: printf( "%s", "VII" ); break;
         case 8: printf( "%s", "VIII" ); break;
         case 9: printf( "%s", "IX" ); break;
      }

      puts( "" );
   }
}