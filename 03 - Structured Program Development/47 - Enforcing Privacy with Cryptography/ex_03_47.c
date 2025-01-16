// ex_03_47.c
// Enforcing Privacy with Cryptography

#include <stdio.h>

int main( void ) {

   int num = 0;

   printf( "%s", "Four-digit integer: " );
   scanf_s( "%d", &num ); // correct data is assumed

   num = ( num / 10 + 7 ) % 10 * 1000 + ( num + 7 ) % 10 * 100
       + ( num / 1000 + 7 ) % 10 * 10 + ( num / 100 + 7 ) % 10;

   printf( "\nEncrypted: %04d\n", num );

   num = ( num / 10 + 3 ) % 10 * 1000 + ( num + 3 ) % 10 * 100
       + ( num / 1000 + 3 ) % 10 * 10 + ( num / 100 + 3 ) % 10;

   printf( "Decrypted: %04d\n", num );
}