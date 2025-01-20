// ex_04_39.c
// Limitations of Floating-Point Numbers for Monetary Amounts

#include <stdio.h>

int main( void ) {

   float number = 1000000.00f;

   printf( "%.2f\n", number + 0.10f );
}