/*
 * EX3_C_Program_to_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function.c
 *
 *  Created on: Sep 2, 2026
 *      Author: Marina
 */

#include<stdio.h>

typedef struct S_complex{
	float real;
	float img;
}S_complex;

S_complex calc_comp(S_complex N1,S_complex N2){
  S_complex result;
  result.real= N1.real+N2.real;
  result.img=N1.img+N2.img;
  return result;

}

int main(){
	S_complex N1,N2,result;
	printf("Enter 1st complex number: \n");
	printf("Enter real and imaginary respectively :\n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&N1.real);
	scanf("%f",&N1.img);
	printf("Enter 2nd complex number: \n");
	printf("Enter real and imaginary respectively :\n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&N2.real);
	scanf("%f",&N2.img);
	result = calc_comp( N1, N2);
  printf("sum=%.2f+%.2fi",result.real,result.img);
}
