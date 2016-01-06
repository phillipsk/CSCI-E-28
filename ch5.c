//
// Created by Kevin Phillips on 1/5/16.
// Following Programming in C by Stephen G Kochkan in preparation for CSCI E-28
//


#include <stdio.h>
#include <math.h>
/*
 * This method prints out every 5th triangle number up to the for loop body limit of 50
 */
int question3(void){
    int triangularNumber, i = 0;

    printf("Number | triangularNumber\n");
    printf("-------------------------\n");
    for (int i = 5; i <= 50; i+=5) {
        triangularNumber = i*(i + 1) / 2;
        printf("#%2i            %i\n",i,triangularNumber);
    }

}

int main(void) {
    question3();
}
