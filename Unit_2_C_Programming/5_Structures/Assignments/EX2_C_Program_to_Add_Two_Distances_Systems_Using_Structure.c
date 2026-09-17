/*
 * C_Program_to_Add_Two_Distances_Systems_Using_Structure.c
 *
 *  Created on: Aug 31, 2026
 *      Author: Marina
 */


#include<stdio.h>
typedef struct S_distances{
	float feet;
	float inch;

}S_distances;


S_distances  sum_of_distances(S_distances d1, S_distances d2){
	S_distances result;
	result.feet=d1.feet + d2.feet;
	result.inch=d1.inch + d2.inch;
   while(result.inch>=12){ /*it keep checking the tell the condition is true*/ /*Check this condition once. */
	  result.feet++;
	  result.inch -=12;
   }

   return result;
}


int main(){
	S_distances d1,d2;
	S_distances result;
		printf("Enter info for 1st distance: \n");
		printf("Enter feet:\n");
		fflush(stdin); fflush(stdout);
		scanf("%f",&d1.feet);
		printf("Enter inch:\n");
		fflush(stdin); fflush(stdout);
		scanf("%f",&d1.inch);
		printf("Enter info for 2nd distance: \n");
		printf("Enter feet:\n");
		fflush(stdin); fflush(stdout);
		scanf("%f",&d2.feet);
		printf("Enter inch:\n");
		fflush(stdin); fflush(stdout);
		scanf("%f",&d2.inch);

	   result = sum_of_distances(d1,d2);
	   printf("Sum of distances =%.0f\'%.2f\"",result.feet,result.inch);

return 0;
}
