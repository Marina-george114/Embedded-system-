/*
 * EX1_program_check_number_is_even_or_odd.c
 *
 *  Created on: Jul 27, 2025
 *      Author: Marina
 */


#include<stdio.h>
int main(){
	int x;
printf("enter an integer you want to check: \n" );
fflush(stdin); fflush(stdout);
scanf("%d",&x);
if(x%2==0){
	printf("%d is even",x);
	}
else{
	printf("%d is odd",x);

}
return 0;
}
/* can be written by inline conditon
#include<stdio.h>
int main(){
	int x;
printf("enter an integer you want to check: \n" );
fflush(stdin); fflush(stdout);
scanf("%d",&x);
(x%2==0)? printf("%d is even",x):printf("%d is odd",x);
return 0;
*/
