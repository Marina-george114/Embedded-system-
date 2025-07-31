/*
 * EX4_c_program_to_check_number_is_positive_or_negative.c
 *
 *  Created on: Jul 30, 2025
 *      Author: Marina
 */


#include<stdio.h>
int main(){
	float x;
	printf(" enter a number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	if(x>0){
	printf("%f is positive",x);
	}
	else if(x<0){
		printf("%f is negative",x);
	}
	else{
		printf("you entered %f",x);
	}
	return 0;
}
/*
 #include<stdio.h>
int main(){
	float x;
	printf(" enter a number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	(x>0)? printf("%f is positive",x):
    (x<0)?printf("%f is negative",x):
    printf(" youu entered %f",x);

	return 0;
	}
 */
