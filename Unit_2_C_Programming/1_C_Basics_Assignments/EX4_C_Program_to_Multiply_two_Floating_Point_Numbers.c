/*
 * EX4_C_Program_to_Multiply_two_Floating_Point_Numbers.c
 *
 *  Created on: Jul 26, 2025
 *      Author: Marina
 */


#include <stdio.h>
int main(int argc, char ** argv){
	float x,y,product;
	printf("enter two numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);
	product=x*y;
	printf("product: %f",product);
	return 0;
}
