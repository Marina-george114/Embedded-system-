/*
 * EX3_c_program_to_find_the_largest_number_among_3_no.c
 *
 *  Created on: Jul 30, 2025
 *      Author: Marina
 */


/*
 * EX3_c_program_to_find_the_largest_number_among_3_no.c
 *
 *  Created on: Jul 30, 2025
 *      Author: Marina
 */


#include <stdio.h>
int main(){
	float x,y,z;
	printf("enter 3 numbers : \n");
	fflush(stdin); fflush(stdout);
	scanf("%f" "%f" "%f",&x,&y,&z);
	if(x>y && x>z ){
		printf("largest number = %f",x);
		}
		else if(y>z && y>x){
            printf("largest number = %f",y);
        }
 else{
			printf("largest number = %f",z);
    }
         return 0;

    }
/* inline (ternary)condition
 * #include <stdio.h>
    int main(){
      float  x,y,z ;
      printf("enter 3 numbers: \n");
      fflush(stdin); fflush(stdout);
      scanf("%f" "%f" "%f",&x,&y,&z);
(x > y && x > z) ? printf("Largest number = %f\n", x) :
    (y > x && y > z) ? printf("Largest number = %f\n", y) :
                      printf("Largest number = %f\n", z);





return 0;
    }
 *
 */
