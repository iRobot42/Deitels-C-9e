// ex_05_45.c
// Testing Math Library Functions

#include <math.h>
#include <stdio.h>

int main( void ) {

   puts( "Function   Arguments   Result" );
   puts( "--------------------------------" );
   printf( "sqrt       900.0       %f\n", sqrt( 900.0 ));
   printf( "sqrt       9.0         %f\n", sqrt( 9.0 ));
   printf( "sqrt       42          %f\n", sqrt( 42 ));
   printf( "cbrt       27.0        %f\n", cbrt( 27.0 ));
   printf( "cbrt       -8.0        %f\n", cbrt( -8.0 ));
   printf( "cbrt       42          %f\n", cbrt( 42 ));
   printf( "exp        1.0         %f\n", exp( 1.0 ));
   printf( "exp        2.0         %f\n", exp( 2.0 ));
   printf( "exp        0           %f\n", exp( 0 ));
   printf( "log        2.718282    %f\n", log( 2.718282 ));
   printf( "log        7.389056    %f\n", log( 7.389056 ));
   printf( "log        0           %f\n", log( 0 ));
   printf( "log10      10.0        %f\n", log10( 10.0 ));
   printf( "log10      100.0       %f\n", log10( 100.0 ));
   printf( "log10      -1          %f\n", log10( -1 ));
   printf( "fabs       13.5        %f\n", fabs( 13.5 ));
   printf( "fabs       0.0         %f\n", fabs( 0.0 ));
   printf( "fabs       -13.5       %f\n", fabs( -13.5 ));
   printf( "ceil       9.2         %f\n", ceil( 9.2 ));
   printf( "ceil       -9.8        %f\n", ceil( -9.8 ));
   printf( "ceil       .0001       %f\n", ceil( .0001 ));
   printf( "floor      9.2         %f\n", floor( 9.2 ));
   printf( "floor      -9.8        %f\n", floor( -9.8 ));
   printf( "floor      0.5         %f\n", floor( 0.5 ));
   printf( "pow        2, 7        %f\n", pow( 2, 7 ));
   printf( "pow        9, .5       %f\n", pow( 9, .5 ));
   printf( "pow        -1, 3       %f\n", pow( -1, 3 ));
   printf( "fmod       13.6, 2.33  %f\n", fmod( 13.6, 2.33 ));
   printf( "fmod       2.6 1.2     %f\n", fmod( 2.6, 1.2 ));
   printf( "fmod       2, 5        %f\n", fmod( 2, 5 ));
   printf( "sin        0.0         %f\n", sin( 0.0 ));
   printf( "sin        1           %f\n", sin( 1 ));
   printf( "cos        0.0         %f\n", cos( 0.0 ));
   printf( "cos        3.14159     %f\n", cos( 3.14159 ));
   printf( "tan        0.0         %f\n", tan( 0.0 ));
   printf( "tan        atan( 42 )  %f\n", tan( atan( 42 )));
}