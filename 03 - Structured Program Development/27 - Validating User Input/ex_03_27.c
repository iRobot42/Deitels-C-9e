// ex_03_27.c
// Validating User Input

#include <stdio.h>

int main( void ) {

   int passes = 0;
   int student = 0;

   puts( "Enter results (1 = pass, 2 = fail):\n" );

   while ( student++ < 10 ) {

      int result = 0;

      printf( "Student %d: ", student );
      scanf_s( "%d", &result );

      if ( result == 1 ) ++passes;
      else if ( result != 2 ) --student;
   }

   printf( "\nPassed: %d\n", passes );
   printf( "Failed: %d\n", 10 - passes );

   if ( passes > 8 )
      puts( "\nBonus to instructor!" );
}