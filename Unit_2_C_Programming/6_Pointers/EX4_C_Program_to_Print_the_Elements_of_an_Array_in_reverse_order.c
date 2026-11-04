/*
 * EX4_C_Program_to_Print_the_Elements_of_an_Array_in_reverse_order.c
 *
 *  Created on: Nov 4, 2026
 *      Author: Marina
 */


#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int *ptr = arr;

    printf("Enter the number of elements: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    printf("Enter %d elements in the array :\n", n);

    for (int i = 0; i < n; i++)
    {
    	 printf("element - %d:\n", i+1);

    	fflush(stdin); fflush(stdout);
        scanf("%d", ptr + i);
    }

    printf("Elements in reverse order:\n");

    for (int i = n - 1; i >= 0; i--)
    {
    	 printf("element - %d:%d\n", i,*(ptr + i));

    }

    return 0;
}
