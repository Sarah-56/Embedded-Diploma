/*
 * Ex_3.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */


#include <stdio.h>

int main(){
	int x, y;
	printf("Enter two Integers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &x, &y);
	printf("Sum: %d", x + y);
	return 0;
}
