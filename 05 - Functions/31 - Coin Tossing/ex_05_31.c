// ex_05_31.c
// Coin Tossing

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip( void );

int main( void ) {

   srand(( unsigned )time( NULL ));

   int heads = 0;
   int tails = 0;

   for ( int i = 1; i <= 100; ++i ) {

      if ( flip() ) {
         printf( "%s ", "Heads" );
         ++heads;
      } else {
         printf( "%s ", "Tails" );
         ++tails;
      }

      if (!( i % 10 ))
         puts( "" );
   }

   printf( "\nHeads: %d\n", heads );
   printf( "Tails: %d\n", tails );
}

int flip( void ) {
   return rand() % 2;
}