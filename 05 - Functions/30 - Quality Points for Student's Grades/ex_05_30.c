// ex_05_30.c
// Quality Points for Student's Grades

#include <stdio.h>

int toQualityPoints( int );

int main( void ) {

   int average;

   do {
      printf( "%s: ", "Student's average" );
      scanf_s( "%d", &average );
   } while ( average < 0 || average > 100 );

   printf( "Quality point: %d\n", toQualityPoints( average ));
}

int toQualityPoints( int avg ) {
   return avg >= 90 ? 4
        : avg >= 80 ? 3
        : avg >= 70 ? 2
        : avg >= 60 ? 1 : 0;
}