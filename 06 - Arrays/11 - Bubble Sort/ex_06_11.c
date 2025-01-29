// ex_06_11.c
// Bubble Sort

#include <stdio.h>

#define SIZE 10

void print_array( const int[] );

int main( void ) {

   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   puts( "Data items in original order" );
   print_array( a );

   for ( int pass = 1; pass < SIZE; ++pass ) {
      int swapped = 0;
      for ( size_t i = 0; i < SIZE - pass; ++i )
         if ( a[ i ] > a[ i + 1 ] ) {
            int hold = a[ i ];
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
            swapped = 1;
         }
      if ( !swapped )
         break;
   }

   puts( "Data items in ascending order" );
   print_array( a );
}

void print_array( const int arr[] ) {
   for ( size_t i = 0; i < SIZE; ++i )
      printf( "%4d", arr[ i ] );
   puts( "" );
}