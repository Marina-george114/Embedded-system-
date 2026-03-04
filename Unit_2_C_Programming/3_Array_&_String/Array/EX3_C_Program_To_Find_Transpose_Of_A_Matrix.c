/*
 * EX3_C_Program_To_Find_Transpose_Of_A_Matrix.c
 *
 *  Created on: Feb 14, 2026
 *      Author: Marina
 */


#include<stdio.h>
int main() {
	int r, c, x, y;
	printf("enter rows and coulmn of the  matrix : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &x, &y);
	float arr[x][y];
	printf("enter the elments of the matrix: \n");
	for (r = 0; r < x; r++) {
		for (c = 0; c < y; c++) {
			printf("enter the element [%d] [%d] :", r, c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &arr[r][c]);

		}

	}
	printf("enterd matrix: \n");
	for (r = 0; r < x; r++) {
		for (c = 0; c < y; c++) {

			printf("%.2f \t", arr[r][c]);
		}
		printf("\r\n");
	}

	printf("the transpose of the matrix : \n");
	for (r = 0; r < y; r++) {
		for (c = 0; c < x; c++) {
			printf("%.2f \t ", arr[c][r]);

		}
		printf("\n");

	}
	return 0;
}

