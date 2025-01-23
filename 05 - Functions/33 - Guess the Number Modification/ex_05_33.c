// ex_05_33.c
// Guess the Number Modification

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ) {

   srand(( unsigned )time( NULL ));

   puts( "I have a number between 1 and 1000." );
   puts( "Can you guess my number?" );
   puts( "Please type your first guess." );

   char play = 'y';
   while ( play == 'y' ) {

      puts( "" );

      int number = 1 + rand() % 1000;
      int count = 0;

      while ( 1 ) {

         int guess;
         printf( "%s: ", "Number" );
         scanf_s( "%d", &guess );

         ++count;

         if ( guess == number ) break;

         printf( "Too %s. Try again.\n",
            guess < number ? "low" : "high" );
      }

      puts( "\nExcellent! You guessed the number!" );
      puts( count < 10 ? "You got lucky!"
          : count > 10 ? "You should be able to do better!"
          : "Either you know the secret or you got lucky!" );
      printf( "%s ", "Would you like to play again (y or n)?" );
      scanf( " %c", &play );
   }
}