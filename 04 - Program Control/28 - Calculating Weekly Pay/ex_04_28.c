// ex_04_28.c
// Calculating Weekly Pay

#include <stdio.h>

int main( void ) {

   puts( "Paycodes:" );
   puts( "0 - Exit program" );
   puts( "1 - Manager" );
   puts( "2 - Hourly worker" );
   puts( "3 - Commission worker" );
   puts( "4 - Pieceworker" );

   int paycode = -1;
   while ( paycode != 0 ) {

      printf( "\n%s: ", "Pay code" );
      scanf_s( "%d", &paycode );

      switch ( paycode ) {

         case 0: break;

         case 1: // Manager
         {
            double fixed;
            printf( "%s: ", "Fixed salary" );
            scanf_s( "%lf", &fixed );
            // correct input data is assumed here and further

            printf( "Weekly pay is $%.2lf\n", fixed );
            break;
         }
         case 2: // Hourly worker
         {
            double hours;
            printf( "%s: ", "Hours worked" );
            scanf_s( "%lf", &hours );

            double wage;
            printf( "%s: ", "Wage per hour" );
            scanf_s( "%lf", &wage );

            double pay = hours * wage;
            if ( hours > 40.0 ) // overtime
               pay += ( hours - 40.0 ) * wage * 0.5;

            printf( "Weekly pay is $%.2lf\n", pay );
            break;
         }
         case 3: // Commission worker
         {
            double sales;
            printf( "%s: ", "Gross weekly sales" );
            scanf_s( "%lf", &sales );

            printf( "Weekly pay is $%.2lf\n", 250.00 + sales * 0.057 );
            break;
         }
         case 4: // Pieceworker
         {
            int pieces;
            printf( "%s: ", "Pieces produced" );
            scanf_s( "%d", &pieces );

            double wage;
            printf( "%s: ", "Wage per piece" );
            scanf_s( "%lf", &wage );

            printf( "Weekly pay is $%.2lf\n", pieces * wage );
            break;
         }
         default: puts( "Incorrect paycode!" );
      }
   }
}