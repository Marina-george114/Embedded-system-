/*
 * EX2_C_Program_To_Calculate_Average.c
 *
 *  Created on: Feb 14, 2026
 *      Author: Marina
 */


#include<stdio.h>
int main (){
	float average,sum,num ;
	int i,n;
	printf("enter the numbers of data :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter number :\n");
		fflush(stdin); fflush(stdout);
    scanf("%f",&num);
     sum+= num;
	}
	average =sum/(i-1);
	printf("average:%.2f",average);
	return 0;
}
