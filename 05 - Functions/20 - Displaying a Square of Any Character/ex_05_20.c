// ex_05_20.c
// Displaying a Square of Any Character

#include <stdio.h>

void display_square( int, char );

int main( void ) {

   int s;
   char f;

   printf( "%s: ", "Side and fill character" );
   scanf( "%d %c", &s, &f );

   display_square( s, f );
}

void display_square( int side, char fill ) {

   for ( int row = 1; row <= side; ++row ) {
      for ( int col = 1; col <= side; ++col )
         printf( "%c", fill );
      puts( "" );
   }
}