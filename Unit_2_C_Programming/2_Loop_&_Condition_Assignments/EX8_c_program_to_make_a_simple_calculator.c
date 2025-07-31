/*
 * EX8_c_program_to_make_a_simple_calculator.c
 *
 *  Created on: Jul 31, 2025
 *      Author: Marina
 */


#include <stdio.h>
int main (){
	float x,y;
	char z;
	start:
	printf("enter operator either (+,-,*,/): \n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&z);
	printf("enter two operands:");
	fflush(stdin); fflush(stdout);
	scanf("%f" "%f",&x,&y);
	if(z=='+')
	{
		printf("%f %c %f= %f",x,z,y,x+y);
	}
	else if (z=='-'){
		printf("%f %c %f= %f",x,z,y,x-y);
}
	else if (z=='*'){
		printf("%f %c %f= %f",x,z,y,x*y);
	}
	else if(z=='/'){
		if(y==0){
			printf("invalid operation \n");
			goto start;
		}
		printf("%f %c %f= %f",x,z,y,x/y);
	}
	else{
		printf("invalid operand \n");
		goto start;
	}
	return 0;

}
