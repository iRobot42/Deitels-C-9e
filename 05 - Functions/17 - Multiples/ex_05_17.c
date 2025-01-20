// ex_05_17.c
// Multiples

#include <stdio.h>

int isMultiple( int, int );

int main( void ) {

   while ( 1 ) {

      int a = 1;
      int b = 1;

      printf( "%s: ", "Two integers (-1 to end)" );
      scanf_s( "%d", &a );
      if ( a == -1 ) break;
      scanf_s( "%d", &b );

      printf( "%d is %sa multiple of %d\n\n", b,
         isMultiple( a, b ) ? "" : "not ", a );
   }
}

int isMultiple( int n1, int n2 ) {
   return n1 && !( n2 % n1 );
}