// ex_05_22.c
// Separating Digits

#include <stdio.h>

int quot( int, int ); // a
int remd( int, int ); // b
void separate( int ); // c

int main( void ) {

   int number;
   printf( "%s: ", "Number (1 - 32767)" );
   scanf_s( "%d", &number );

   separate( number );
}

int quot( int a, int b ) {
   return a / b; // b != 0
}

int remd( int a, int b ) {
   return a % b; // b != 0
}

void separate( int n ) {

   int d = 1;

   while ( quot( n, d ))
      d *= 10;

   while ( d = quot( d, 10 ))
      printf( "%d  ", remd( quot( n, d ), 10 ));

   puts( "" );
}