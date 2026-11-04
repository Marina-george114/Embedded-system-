/*
 * EX3_C_Program_to_Print_a_String_in_Reverse_Using_a_Pointer.c
 *
 *  Created on: Nov 4, 2026
 *      Author: Marina
 */


#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    char rev[100];

    char *ptr = arr;
    char *revptr = rev;

    printf("Print a string in reverse order:\n");
    printf("------------------------------------------\n");

    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    scanf("%s", arr);


    while (*ptr != '\0')
    {
        ptr++;
    }


    while (ptr > arr)
    {
        ptr--;
        *revptr = *ptr;
        revptr++;
    }


    *revptr = '\0';

    printf("Original string: %s\n", arr);
    printf("Reversed string: %s\n", rev);

    return 0;
}
