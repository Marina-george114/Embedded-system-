/*
 * EX1_C_Program_to_Demonstrate_How_to_Handle_the_Pointers_in_the_Program.c
 *
 *  Created on: Oct 23, 2026
 *      Author: Marina
 */


#include<stdio.h>
int main(){
    int m=29;
    int *ab=&m;
    printf("address of m :0x%p\n" ,&m);
    printf("value of m :%d\n",m);


    *ab=34;
    printf("address of ab :0x%p \n",(void*)&m);
    printf("value of ab :%d\n",*ab);

    *ab=7;
    printf("address of m :0x%p\n",&m);
    printf("value of m :%d\n",m);
    return 0;

}




