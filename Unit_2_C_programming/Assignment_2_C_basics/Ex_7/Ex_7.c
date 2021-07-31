/*
 * Ex_7.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */

#include <stdio.h>

int main(){
	int num, fact = 1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	if(num < 0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else{
		for(int i = 1; i <= num; i++){
			fact *= i;
		}
		printf("Factorial  = %d", fact);
	}
	return 0;
}
