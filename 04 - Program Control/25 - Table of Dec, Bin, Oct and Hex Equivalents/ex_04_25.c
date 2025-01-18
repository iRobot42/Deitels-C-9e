// ex_04_25.c
// Table of Decimal, Binary, Octal and Hexadecimal Equivalents

#include <stdio.h>

int main( void ) {

   printf( "%4s  %9s  %3s  %3s\n", "Dec", "Bin", "Oct", "Hex" );
   puts( "-------------------------" );

   for ( int num = 1; num <= 256; ++num ) {

      int dec = num;
      int ten = 100000000; // 10^8
      int two = 256; // 2^8
      int bin = 0;

      while ( dec != 0 ) {
         bin += dec / two * ten;
         dec %= two;
         ten /= 10;
         two /= 2;
      }

      printf( "%4d  %9d  %3o  %3x\n", num, bin, num, num );
   }
}