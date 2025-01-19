// ex_04_29.c
// De Morgan's Laws

#include <stdio.h>

int main( void ) {

   int condition1 = 1, condition2 = 0;
   int expression = 1, de_morgans = 0;

   int x = 1, y = 2;
   int a = 3, b = 4, g = 5;
   int i = 6, j = 7;

   a = b = g = i = j = x = y = 0; // extra test

   condition1 = x < 5;
   condition2 = y >= 7;
   expression = !condition1 && !condition2;
   de_morgans = !( condition1 || condition2 );
   printf( "a: %d\n", expression == de_morgans );

   condition1 = a == b;
   condition2 = g != 5;
   expression = !condition1 || !condition2;
   de_morgans = !( condition1 && condition2 );
   printf( "b: %d\n", expression == de_morgans );

   condition1 = x <= 8;
   condition2 = y > 4;
   expression = !( condition1 && condition2 );
   de_morgans = !condition1 || !condition2;
   printf( "c: %d\n", expression == de_morgans );

   condition1 = i > 4;
   condition2 = j <= 6;
   expression = !( condition1 || condition2 );
   de_morgans = !condition1 && !condition2;
   printf( "d: %d\n", expression == de_morgans );
}