// ex_04_30.c
// Replacing switch with if...else

#include <stdio.h>

int main( void ) {

   int aCount = 0;
   int bCount = 0;
   int cCount = 0;
   int dCount = 0;
   int fCount = 0;

   puts( "Enter the letter grades." );
   puts( "Enter the EOF character to end input." );

   int grade = 0;

#if 0
   while (( grade = getchar() ) != EOF )
      if ( grade == 'A' || grade == 'a' )
         ++aCount;
      else if ( grade == 'B' || grade == 'b' )
         ++bCount;
      else if ( grade == 'C' || grade == 'c' )
         ++cCount;
      else if ( grade == 'D' || grade == 'd' )
         ++dCount;
      else if ( grade == 'F' || grade == 'f' )
         ++fCount;
      else if ( grade == '\n' || grade == '\t' || grade == ' ' )
         continue;
      else puts( "Incorrect letter grade entered." );
#endif

   while (( grade = getchar() ) != EOF ) {
      if ( grade == 'A' || grade == 'a' ) {
         ++aCount;
         continue;
      }
      if ( grade == 'B' || grade == 'b' ) {
         ++bCount;
         continue;
      }
      if ( grade == 'C' || grade == 'c' ) {
         ++cCount;
         continue;
      }
      if ( grade == 'D' || grade == 'd' ) {
         ++dCount;
         continue;
      }
      if ( grade == 'F' || grade == 'f' ) {
         ++fCount;
         continue;
      }
      if ( grade == '\n' || grade == '\t' || grade == ' ' )
         continue;
      puts( "Incorrect letter grade entered." );
   }

   puts( "Totals for each letter grade are:" );
   printf( "A: %d\n", aCount );
   printf( "B: %d\n", bCount );
   printf( "C: %d\n", cCount );
   printf( "D: %d\n", dCount );
   printf( "F: %d\n", fCount );
}