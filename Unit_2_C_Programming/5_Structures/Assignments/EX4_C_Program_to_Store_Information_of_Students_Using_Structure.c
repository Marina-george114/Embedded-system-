/*
 * EX4_C_Program_to_Store_Information_of_Students_Using_Structure.c
 *
 *  Created on: Sep 2, 2026
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
   Sstudent student[10];
    for(int i=0;i<10;i++){

    printf("Student %d \n",i+1);
    printf("Enter roll munber: \n");
    fflush(stdin); fflush(stdout);
    scanf("%d",&student[i].age);
    printf("Enter name : \n");
    fflush(stdin); fflush(stdout);
    fgets(student[i].name,50,stdin);
    student[i].name[strcspn(student[i].name, "\n")] = '\0';
    printf("Enter marks : \n");
    fflush(stdin); fflush(stdout);
    scanf("%f",&student[i].gpa);
   getchar();// to consume the newline char left in the input buffer after fgets,so the next fgets can read the input correctly

    }
for(int i=0;i<10;i++){
    printf("Student name: %s\n",student[i].name);
    printf("Student age: %d\n",student[i].age);
    printf("Student GPA: %.2f\n",student [i].gpa);
}
}
