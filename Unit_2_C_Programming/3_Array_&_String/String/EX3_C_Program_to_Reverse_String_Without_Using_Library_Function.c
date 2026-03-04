/*
 * EX3_C_Program_to_Reverse_String_Without_Using_Library_Function.c
 *
 *  Created on: Feb 15, 2026
 *      Author: Marina
 */


#include<stdio.h>
#include<string.h>
int main(){
	int i,j=0;
	char arr[100],rev[100];
	printf("enter the string : \n");
	fflush(stdin); fflush(stdout);
	fgets(arr,sizeof(arr),stdin);
	for( i= strlen(arr) ; i>0; i--){

		rev[j]=arr[i-1];
     j++;
	}

	printf("reverse string is :%s", rev);
	return 0;
}
