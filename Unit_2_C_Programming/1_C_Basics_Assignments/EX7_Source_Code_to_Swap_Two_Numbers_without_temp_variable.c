/*
 * EX7_Source_Code_to_Swap_Two_Numbers_without_temp_variable.c
 *
 *  Created on: Jul 27, 2025
 *      Author: Marina
 */


#include <stdio.h>
int main (){
    float x,y;
    printf("enter value num1: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&x);
    printf("enter value num2 :");
    fflush(stdin); fflush(stdout);
    scanf("%f",&y);
     x=y;
    printf("After swappin;g, value of num1 %f\n ",x);
    y=x;
    printf("After swapping, value of  num2 %f\n ",y);
        return 0;
}
