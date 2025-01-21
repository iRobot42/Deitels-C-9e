// ex_05_23.c
// Time in Seconds

#include <math.h>
#include <stdio.h>

int seconds_since_12( int, int, int );

int main( void ) {

   int hh, mm, ss;
   printf( "%s: ", "Time (hh mm ss)" );
   scanf_s( "%d %d %d", &hh, &mm, &ss );

   int time = seconds_since_12( hh, mm, ss );
   printf( "The number of seconds since 12h: %d\n", time );

   printf( "%s: ", "Time (hh mm ss)" );
   scanf_s( "%d %d %d", &hh, &mm, &ss );

   printf( "The difference is %d second(s)\n",
      abs( time - seconds_since_12( hh, mm, ss )));
}

int seconds_since_12( int h, int m, int s ) {
   if ( h >= 12 ) h -= 12;
   return h * 3600 + m * 60 + s;
}