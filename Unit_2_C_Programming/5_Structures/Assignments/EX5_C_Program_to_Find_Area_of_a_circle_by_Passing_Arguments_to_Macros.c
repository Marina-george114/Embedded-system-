/*
 * EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros.c
 *
 *  Created on: Sep 3, 2026
 *      Author: Marina
 */


#include<stdio.h>
#define Area(r,...) (pi*r*r)
#define pi 3.14
int main(){
	float x;
	printf("Enter the radius : \n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	printf("Area=%f",Area(x));
	return 0;
}
