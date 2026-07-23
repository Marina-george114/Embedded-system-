/*
 * EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion.c
 *
 *  Created on: Jul 22, 2026
 *      Author: Marina
 */


#include<stdio.h>
int  power(int base ,int exponent  ){
	if(exponent==0)
		return 1;
	return base *power(base,exponent-1);
}
int main(){
	int base ,exponent;
	printf("Enter base number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("Enter the exponent (positive number):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&exponent);
	if(exponent<0){
		printf("negative isn't allowed enter positive number ");
	}
	else{
		printf("%d",power(base,exponent));
	}
	return 0;
}
