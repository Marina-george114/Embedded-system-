/*
 * EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c
 *
 *  Created on: Feb 14, 2026
 *      Author: Marina
 */


#include<stdio.h>
int main(){
	float a[2][2];
	float b[2][2];
	float d[2][2];
	int r,c;
printf("enter the elements of the 1st array:\n");
for(r=0;r<2;r++){
	for(c=0;c<2;c++){
		printf("Enter the a%d%d :\r\n",r,c);
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[r][c]);

	}
}
printf("enter the elements of the 2nd array:\n");
for(r=0;r<2;r++){
	for(c=0;c<2;c++){
		printf("Enter the b%d%d :\r\n",r,c);
		fflush(stdin); fflush(stdout);
		scanf("%f",&b[r][c]);

        }
    }
    printf("sum of matrix: \r\n");
for(r=0;r<2;r++){
	for(c=0;c<2;c++){
		d[r][c]=a[r][c]+b[r][c];
printf("%.2f \t",d[r][c]);
	}
  printf("\r\n");

}


return 0;
}

