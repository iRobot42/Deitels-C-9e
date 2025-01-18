// ex_04_22.c
// Average Grade

#include <stdio.h>

int main( void ) {

   int a = 0;
   int b = 0;
   int c = 0;
   int d = 0;
   int f = 0;

   puts( "Enter the letter grades." );
   puts( "Enter the EOF character to end input." );

   char grade = EOF;

   while (( grade = getchar() ) != EOF )
      switch ( grade ) {
         case 'A': case 'a': ++a; break;
         case 'B': case 'b': ++b; break;
         case 'C': case 'c': ++c; break;
         case 'D': case 'd': ++d; break;
         case 'F': case 'f': ++f; break;
         case ' ': case '\t': case '\n': break;
         default: puts( "Incorrect grade entered!" );
      }

   double average = ( a * 5 + b * 4 + c * 3 + d * 2 + f )
      / ( double )( a + b + c + d + f );

   if ( average >= 4.5 ) grade = 'A';
   else if ( average >= 3.5 ) grade = 'B';
   else if ( average >= 2.5 ) grade = 'C';
   else if ( average >= 1.5 ) grade = 'D';
   else grade = 'F';

   printf( "Average grade for the class is %c.\n", grade );
}