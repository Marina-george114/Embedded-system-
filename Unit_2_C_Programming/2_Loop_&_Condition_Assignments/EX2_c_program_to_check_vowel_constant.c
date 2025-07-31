/*
 * EX2_c_program_to_check_vowel_constant.c
 *
 *  Created on: Jul 27, 2025
 *      Author: Marina
 */



#include <stdio.h>
int main(){
	char x;
	printf("enter an alphabet:\n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	switch(x){
	case 'a':
	case 'A':

	case 'e':
	case 'E':

	case 'i':
	case 'I':

	case 'o':
	case 'O':

	case 'u':
    case 'U':
		printf("%c is vowel",x);
	    break;
    default:
    printf("%c is constant",x);
	}

	return 0;
}
/* can be written by inline conditon
 #include <stdio.h>
int main() {
    char x;
    printf("enter an alphabet:\n");
    fflush(stdin); fflush(stdout);
    scanf("%c", &x);
    (x=='i'||x=='a'||x=='e'||x=='o'||x=='u')? printf("%c is vowel",x):printf("%c is constant",x);
}

 */
