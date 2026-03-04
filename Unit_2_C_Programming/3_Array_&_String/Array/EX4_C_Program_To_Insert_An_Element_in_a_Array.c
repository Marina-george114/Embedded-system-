/*
 * EX4_C_Program_To_Insert_An_Element_in_a_Array.c
 *
 *  Created on: Feb 14, 2026
 *      Author: Marina
 */


#include <stdio.h>

int main() {
	int num_element, location, i;
	float ins_element;
	float arr[50];
	printf("enter no of elements :\n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num_element);
	for (i = 0; i < num_element; i++) {
		printf("enter element no %d : \n", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}
	printf(" \n the entered numbers :  \n");
	for (i = 0; i < num_element; i++) {
		printf("%.2f \t ", arr[i]);

	}
	printf("enter the number to be inserted :  \n ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &ins_element);
	printf("enter the location :\n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &location);

	for (i = num_element - 1; i >= location - 1; i--) {
		arr[i + 1] = arr[i];

	}

	arr[location - 1] = ins_element;
	num_element++;

	for (i = 0; i < num_element; i++) {
		printf("%f", arr[i]);
	}
	return 0;
}

