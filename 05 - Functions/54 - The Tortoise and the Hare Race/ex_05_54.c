// ex_05_54.c
// The Tortoise and the Hare Race

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int moveHare( int );
int moveTortoise( int );

int main( void ) {

   srand(( unsigned )time( NULL ));

   int start = 1;
   int finish = 70;

   int tortoise = start;
   int hare = start;

   puts( "ON YOUR MARK, GET SET" );
   puts( "BANG             !!!!" );
   puts( "AND THEY'RE OFF  !!!!" );

   while ( tortoise < finish && hare < finish ) {

      tortoise = moveTortoise( tortoise );
      hare = moveHare( hare );

      int spaces = tortoise < hare ? tortoise : hare;
      while ( --spaces ) printf( "%c", ' ' );

      if ( tortoise < hare ) {

         printf( "%c", 'T' );
         spaces = hare - tortoise;
         while ( --spaces ) printf( "%c", ' ' );
         printf( "%c\n", 'H' );

      } else if ( hare < tortoise ) {

         printf( "%c", 'H' );
         spaces = tortoise - hare;
         while ( --spaces ) printf( "%c", ' ' );
         printf( "%c\n", 'T' );

      } else printf( "%s\n", "OUCH!!!" );
   }

   int diff = tortoise - hare;
   if ( diff > 0 ) puts( "TORTOISE WINS!!! YAY!!!" );
   else if ( diff < 0 ) puts( "Hare wins. Yuch." );
   else puts( "It's a tie" );
}

int moveHare( int pos ) {

   int rnd = 1 + rand() % 10;

   if ( rnd <= 2 ) return pos; // sleep
   else if ( rnd <= 4 ) pos += 9; // big hop
   else if ( rnd <= 5 ) pos -= 12; // big slip
   else if ( rnd <= 8 ) pos += 1; // small hop
   else pos -= 2; // small slip

   return pos < 1 ? 1 : pos > 70 ? 70 : pos;
}

int moveTortoise( int pos ) {

   int rnd = 1 + rand() % 10;

   if ( rnd <= 5 ) pos += 3; // fast plod
   else if ( rnd <= 7 ) pos -= 6; // slip
   else pos += 1; // slow plod

   return pos < 1 ? 1 : pos > 70 ? 70 : pos;
}