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

    x=x+y; //num1+num2  // x now holds the sum of original x and y
    y=x-y; // num1+num2-num2=num1  // y now holds the original value of x
    x=x-y; //num1+num2-num1=num2    // y now holds the original value of x
    printf("After swapping, value of num1 %f\n:",x);
    printf("After swapping, value of  num2 %f\n: ",y);
        return 0;
}
