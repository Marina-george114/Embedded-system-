/*
 * EX7_c_program_to find_factorial.c
 *
 *  Created on: Jul 30, 2025
 *      Author: Marina
 */


 #include <stdio.h>
int main(){
	int i,x,fact=1;
	printf("enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	switch(x){
		case 1:
		case 0:
        printf("factorial %d = %d",x,fact);
			break;
            default:
            if(x>0){
				for( i=1;i<=x;i++ ){
					 fact*=i;
				}
				printf("factorial %d = %d ",x, fact);
				}
				else if(x<0){
			      printf("Error!!! factorial of negative number doesnot exist");
					}


		}



	return 0;
}
/*#include <stdio.h>
int main() {
    int i, x, fact = 1;
    printf("enter an integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &x);

    if (x < 0) {
        printf("Error!!! factorial of negative number does not exist");
    } else {
        for (i = 1; i <= x; i++) {
            fact *= i;
        }
        printf("factorial %d = %d", x, (x == 0 || x == 1) ? 1 : fact);
    }

    return 0;
}
*/
