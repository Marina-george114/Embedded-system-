/*
 * EX5_C_Program_To_Search_an_Element_In_Array.c
 *
 *  Created on: Feb 14, 2026
 *      Author: Marina
 */


#include<stdio.h>
int main(){
	int no_element, i;
	float x;
 float arr[50];
 printf("enter no_element :\n");
 fflush(stdin); fflush(stdout);
 scanf("%d",&no_element);
 printf("enter the elements :\n");
 for(i=0;i<no_element;i++){
	 fflush(stdin); fflush(stdout);
	 scanf("%f",&arr[i]);

 }
	printf("enter the element to be searched : \n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	for(i=0;i<no_element;i++){
		if(x==arr[i])
    printf("number found at location :%d \n",i+1);

  }


return 0;

}
