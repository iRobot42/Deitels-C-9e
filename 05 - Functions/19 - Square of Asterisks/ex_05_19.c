// ex_05_19.c
// Square of Asterisks

#include <stdio.h>

void display_square( int );

int main( void ) {

   int s;
   printf( "%s: ", "Side" );
   scanf_s( "%d", &s );

   display_square( s );
}

void display_square( int side ) {

   for ( int row = 1; row <= side; ++row ) {
      for ( int col = 1; col <= side; ++col )
         printf( "%c", '*' );
      puts( "" );
   }
}