/*
 * Ex_5.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */


#include <stdio.h>

int main(){
	char x;
	printf("Enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &x);
	printf("ASCII value of %c = %d", x, x);
	return 0;
}
