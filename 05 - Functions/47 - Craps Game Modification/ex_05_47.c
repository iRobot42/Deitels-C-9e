// ex_05_47.c
// Craps Game Modification

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int run( void );
int rollDice( void );
void chatter( void );

int main( void ) {

   srand(( unsigned )time( NULL ));

   int bankBalance = 1000;
   printf( "Current balance is $%d\n", bankBalance );

   char playAgain = 'y';
   while ( playAgain == 'y' ) {

      int wager;
      do {
         printf( "%s: ", "Your wager" );
         scanf_s( "%d", &wager );
      } while ( wager < 1 || wager > bankBalance );

      if ( run() ) {

         puts( "Player wins" );
         bankBalance += wager;

      } else {

         puts( "Player loses" );
         bankBalance -= wager;

         if ( !bankBalance ) {
            puts( "Sorry. You busted!" );
            break;
         }
      }

      printf( "Balance is $%d\n", bankBalance );
      printf( "\n%s? ", "Play again (y/n)" );
      scanf( " %c", &playAgain );
   }
}

int run( void ) {

   enum Status{ play, won, lost };

   enum Status gameStatus = play;
   int myPoint = rollDice();

   switch ( myPoint ) {

      case 7:
      case 11:
         gameStatus = won;
         break;
      case 2:
      case 3:
      case 12:
         gameStatus = lost;
         break;
      default:
         gameStatus = play;
         printf( "Point is %d\n", myPoint );
         chatter();
   }

   while ( gameStatus == play ) {

      int sumOfDice = rollDice();

      if ( sumOfDice == myPoint )
         gameStatus = won;
      else if ( sumOfDice == 7 )
         gameStatus = lost;
   }

   return gameStatus == won;
}

int rollDice( void ) {

   int die1 = 1 + rand() % 6;
   int die2 = 1 + rand() % 6;
   int sum = die1 + die2;

   printf( "Player rolled %d + %d = %d\n", die1, die2, sum );

   return sum;
}

void chatter( void ) {

   switch ( 1 + rand() % 3 ) {

      case 1:
         puts( "Oh, you're going for broke, huh?" );
         break;
      case 2:
         puts( "Aw cmon, take a chance!" );
         break;
      case 3:
         puts( "You're up big. Now's the time to cash in your chips!" );
         break;
   }
}