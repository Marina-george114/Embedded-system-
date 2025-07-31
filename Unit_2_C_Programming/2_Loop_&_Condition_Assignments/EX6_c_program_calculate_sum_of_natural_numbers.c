/*
 * EX6_c_program_calculate_sum_of_natural_numbers.c
 *
 *  Created on: Jul 30, 2025
 *      Author: Marina
 */


#include <stdio.h>
int main(){
	int x,i,sum=0;
	printf("enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		sum+=i;

	}
	printf("sum =%d",sum);

	return 0;
}
