/*
 * Ex_1.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */


#include <stdio.h>

int main(){
	int input;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &input);
	if(input % 2 == 0)
		printf("%d is even", input);
	else
		printf("%d is odd", input);
	return 0;
}
