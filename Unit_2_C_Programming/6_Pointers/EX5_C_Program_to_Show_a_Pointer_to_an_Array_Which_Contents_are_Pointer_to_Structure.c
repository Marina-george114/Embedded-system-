/*
 * EX5_C_Program_to_Show_a_Pointer_to_an_Array_Which_Contents_are_Pointer_to_Structure.c
 *
 *  Created on: Nov 4, 2026
 *      Author: Marina
 */


#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
};
int main()
{
    struct Employee emp[5] = {
        {"Marina", 1002},
        {"John", 1003},
        {"Sara", 1004},
        {"David", 1005},
        {"Beshoy", 1006}
    };
    struct Employee *arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = &emp[i];
    }
    struct Employee **ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("Employee Name : %s\n", (*(ptr + i))->name);
        printf("Employee ID : %d\n\n", (*(ptr + i))->id);
    }

    return 0;
}
