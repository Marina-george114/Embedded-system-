/*
 * EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
 *
 *  Created on: Jul 19, 2026
 *      Author: Marina
 */


#include<stdio.h>
int x;

	int  factorial(int x){
		if(x==1)
			return 1;
	return  x *factorial(x-1);
	}
	int main(){
		printf("enter a number to get it's factorial : \n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&x);
        printf("%d",factorial(x));
	}
