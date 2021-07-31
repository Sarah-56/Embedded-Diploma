/*
 * Ex_7.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */


#include <stdio.h>

int main(){
	int a, b;
	printf("Enter value of a: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("After swapping, value of a = %d\n", a);
	printf("After swapping, value of b = %d", b);
	return 0;
}
