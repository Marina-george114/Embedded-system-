/*
 * EX2_C_Program_To_Find_The_Length_of_a_String.c
 *
 *  Created on: Feb 15, 2026
 *      Author: Marina
 */


#include<stdio.h>
#include<string.h>
int main (){
	char arr[100];
	printf("enter a string : \n");
	fflush(stdin); fflush(stdout);
	fgets(arr,sizeof(arr),stdin);

	 int i=strlen(arr);
	 // to remove the \n
	// arr[strcspn(arr,"\n")]=0;
 // or we can delete the \n that we write at the end line of the printf
	printf("length of string : %d",i);
}
