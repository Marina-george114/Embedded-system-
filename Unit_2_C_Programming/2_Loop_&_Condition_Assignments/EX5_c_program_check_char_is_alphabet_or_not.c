/*
 * EX5_c_program_check_char_is_alphabet_or_not.c
 *
 *  Created on: Jul 30, 2025
 *      Author: Marina
 */


#include <stdio.h>
int main(){
	char x;
	printf("enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if((x>='A' && x<='Z') || (x>='a' && x<='z') ){
		printf("%c is an alphabet",x);

	}
	else{
		printf("%c is not an alphabet",x);
	}
	return 0;
}
