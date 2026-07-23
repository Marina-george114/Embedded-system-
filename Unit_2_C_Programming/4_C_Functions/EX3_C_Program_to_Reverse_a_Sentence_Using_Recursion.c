/*
 * EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion.c
 *
 *  Created on: Jul 20, 2026
 *      Author: Marina
 */


#include<stdio.h>
#include<string.h>
 void reverse(char arr[],int index ){
	 if(index<0)
		 return;
	 printf("%c",arr[index]);
     reverse(arr,index-1);
 }
 int main(){
   char arr[100];
   printf("Enter a sentence :\n");
   fflush(stdin); fflush(stdout);
   fgets(arr,sizeof(arr),stdin);
   arr[strcspn(arr, "\n")] = '\0';
   reverse(arr, strlen(arr) - 1);
   return 0;

 }

