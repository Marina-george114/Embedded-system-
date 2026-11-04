/*
 * EX2_C_Program_to_Print_All_Alphabets_Using_a_pointer.c
 *
 *  Created on: Nov 4, 2026
 *      Author: Marina
 */

#include<stdio.h>
    int main(){
        char alph[27];
        char *ptr;
        printf("printing all alphabets using pointer :\n");
        ptr=alph;
        printf("alphabets are :\n");
        for(int i=0;i<26;i++){
            *ptr = 'A'+i;
            printf("%c ",*ptr);
            ptr++;

        }
    }

