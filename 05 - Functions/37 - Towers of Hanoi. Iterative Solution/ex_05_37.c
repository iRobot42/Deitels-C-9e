// ex_05_37.c
// Towers of Hanoi: Iterative Solution

#include <math.h>
#include <stdio.h>

void hanoi( int, int, int, int );

int main( void ) {

   int d;

   do {
      printf( "%s: ", "Number of disks" );
      scanf_s( "%d", &d );
   } while ( d < 1 );

   hanoi( d, 1, 3, 2 );
}

void hanoi( int disks, int from, int to, int temp ) {

   int lim = ( int )pow( 2, disks );
   for ( int move = 1; move < lim; ++move ) {

      int m = move;
      int d = disks;

      while (!( m % 2 )) {
         m /= 2;
         ++d;
      }

      int src = m / 2 % 3;
      int dst = ( src + 1 ) % 3;

      if (!( d % 2 )) {
         src = ( 3 - src ) % 3;
         dst = ( 3 - dst ) % 3;
      }

      printf( "%d -> %d\n",
         ( src > 1 ? temp : src ? to : from ),
         ( dst > 1 ? temp : dst ? to : from ));
   }
}