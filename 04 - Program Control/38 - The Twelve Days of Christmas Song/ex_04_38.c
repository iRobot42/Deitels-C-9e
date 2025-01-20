// ex_04_38.c
// "The Twelve Days of Christmas" Song

#include <stdio.h>

int main( void ) {

   puts( "\"The Twelve Days of Christmas\"" );

   for ( int day = 1; day <= 12; ++day ) {

      printf( "%s ", "\nOn the" );

      switch ( day ) {
         case 1: printf( "%s", "first" ); break;
         case 2: printf( "%s", "second" ); break;
         case 3: printf( "%s", "third" ); break;
         case 4: printf( "%s", "fourth" ); break;
         case 5: printf( "%s", "fifth" ); break;
         case 6: printf( "%s", "sixth" ); break;
         case 7: printf( "%s", "seventh" ); break;
         case 8: printf( "%s", "eighth" ); break;
         case 9: printf( "%s", "ninth" ); break;
         case 10: printf( "%s", "tenth" ); break;
         case 11: printf( "%s", "eleventh" ); break;
         case 12: printf( "%s", "twelfth" ); break;
      }

      puts( " day of Christmas" );
      puts( "My true love sent to me" );

      switch ( day ) {
         case 12: puts( "Twelve drummers drumming," );
         case 11: puts( "Eleven pipers piping," );
         case 10: puts( "Ten lords a-leaping," );
         case 9: puts( "Nine ladies dancing," );
         case 8: puts( "Eight maids a-milking," );
         case 7: puts( "Seven swans a-swimming," );
         case 6: puts( "Six geese a-laying," );
         case 5: puts( "Five golden rings," );
         case 4: puts( "Four calling birds," );
         case 3: puts( "Three french hens," );
         case 2: puts( "Two turtle doves and" );
         case 1: puts( "A partridge in a pear tree." );
      }
   }
}