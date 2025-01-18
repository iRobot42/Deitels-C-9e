// ex_04_27.c
// Pythagorean Triples

#include <stdio.h>

int main( void ) {

   for ( int hyp = 1; hyp <= 500; ++hyp )
      for ( int leg1 = 1; leg1 < hyp; ++leg1 )
         for ( int leg2 = 1; leg2 <= leg1; ++leg2 )
            if ( hyp * hyp == leg1 * leg1 + leg2 * leg2 )
               printf( "%d\t%d\t%d\n", hyp, leg1, leg2 );
}