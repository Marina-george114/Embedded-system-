/*
 * C_Program_to_Store_Information_of_a_Student_Using_Structure.c
 *
 *  Created on: Aug 29, 2026
 *      Author: Marina
 */


#include<stdio.h>
#include<string.h>

   typedef struct Sstudent{
        char name[50];
        int age;
        float gpa;
    }Sstudent;

int main (){
    Sstudent S1;
    printf("Enter name : \n");
    fflush(stdin); fflush(stdout);
    fgets(S1.name,50,stdin);
    S1.name[strcspn(S1.name, "\n")] = '\0';
    printf("Enter roll number : \n");
    fflush(stdin); fflush(stdout);
    scanf("%d",&S1.age);
    printf("Enter marks : \n");
    fflush(stdin); fflush(stdout);
    scanf("%f",&S1.gpa);
    printf("name: %s\n",S1.name);
    printf("roll: %d\n",S1.age);
    printf("marks: %.2f\n",S1.gpa);


}
