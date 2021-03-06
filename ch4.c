//
// Created by Kevin Phillips on 1/5/16.
// Following Programming in C by Stephen G Kochkan in preparation for CSCI E-28
//

#include <stdio.h>
#include <math.h>

int next_multiple(void){
    int i, j;

    i = 365 ,j = 7 ;
    printf ("i = %i, j = %i, Next Largest Multiple = %i\n",i,j,i + j - i % j);
    i = 12258 ,j = 23 ;
    printf ("i = %i, j = %i, Next Largest Multiple = %i\n",i,j,i + j - i % j);
    i = 996 ,j = 4 ;
    printf ("i = %i, j = %i, Next Largest Multiple = %i\n",i,j,i + j - i % j);
}

int polynomial(void){
//    3x^3 - 5x^2 + 6 where x = 2.55
    double x = 2.55;
    printf("3x^3 - 5x^2 + 6");
    double answer = 3*pow(x,3) - 5*pow(x,2) + 6;
    printf(" = %f\n", answer);
}

int celsiusToF (void){
    float C; int F = 27;

    C = (F - 32) / 1.8 ;
    printf ("%i degrees F = %f degrees C\n",F ,C);
}


int main (void) {
    celsiusToF();
    polynomial();
    printf("\n");
    next_multiple();
}
