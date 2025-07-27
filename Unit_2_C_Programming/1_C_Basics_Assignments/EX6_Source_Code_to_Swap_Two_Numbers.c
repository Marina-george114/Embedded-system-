/*
 * Source_Code_to_Swap_Two_Numbers.c
 *
 *  Created on: Jul 27, 2025
 *      Author: Marina
 */


#include <stdio.h>
int main(){
    float x,y,z;
    printf("enter value num 1:");
    fflush(stdin); fflush(stdout);
    scanf("%f",&x);
    printf("enter value num 2:");
    fflush(stdin); fflush(stdout);
    scanf("%f",&y);
    z=y;
    y=x;
    x=z;
    printf("After swapping, value of num1 %f\n ",x);
    printf("After swapping, value of  num2 %f\n ",y);
        return 0;
}
