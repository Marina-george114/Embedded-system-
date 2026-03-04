/*
 * EX1_C_Program_To_Find_The_Frequency_Of_Characters.c
 *
 *  Created on: Feb 14, 2026
 *      Author: Marina
 */


#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0;
	char ch;
	char arr[100];
	printf("enter a string : \n ");
	fflush(stdin); fflush(stdout);
	fgets(arr,sizeof(arr),stdin);
	printf("enter a character to find frequency : \n ");
		fflush(stdin); fflush(stdout);
		scanf(" %c",&ch);
	for(i=0;i<strlen(arr);i++){
		if(arr[i]==ch){
	    	count++;
	    }
	}
	 printf("frequency of %c=%d\n ",ch,count);

	return 0;
}
