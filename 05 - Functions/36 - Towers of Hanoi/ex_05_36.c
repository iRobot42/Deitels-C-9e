// ex_05_36.c

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

   if ( disks ) {
      hanoi( disks - 1, from, temp, to );
      printf( "%d -> %d\n", from, to );
      hanoi( disks - 1, temp, to, from );
   }
}