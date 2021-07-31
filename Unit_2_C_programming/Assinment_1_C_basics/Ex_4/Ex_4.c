/*
 * Ex_4.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */


#include <stdio.h>

int main(){
	float x, y;
	printf("Enter two Integers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f", &x, &y);
	printf("Product: %f", x * y);
	return 0;
}
