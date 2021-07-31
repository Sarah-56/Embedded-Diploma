/*
 * Ex_4.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */

#include <stdio.h>

int main(){
	float num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &num);
	if(num > 0)
		printf("%f is positive", num);
	else if(num < 0)
		printf("%f is negative", num);
	else
		printf("You entered zero.");

	return 0;
}
