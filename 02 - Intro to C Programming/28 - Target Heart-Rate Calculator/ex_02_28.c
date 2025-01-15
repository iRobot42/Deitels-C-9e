// ex_02_28.c
// Target Heart-Rate Calculator

#include <stdio.h>

int main( void ) {

   int age;

   printf( "%s", "Age, in years: " );
   scanf( "%d", &age );

   int max = 220 - age;

   printf( "Maximum heart rate is %d bpm\n", max );
   printf( "Target HR zone is %d-%d bpm\n", max * 50 / 100, max * 85 / 100 );
}