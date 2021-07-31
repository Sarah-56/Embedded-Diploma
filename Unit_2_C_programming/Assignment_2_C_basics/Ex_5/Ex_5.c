/*
 * Ex_5.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */

#include <stdio.h>

int main(){
	char ch;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &ch);
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		printf("%c is an alphabet", ch);
	else
		printf("%c is not an alphabet", ch);

	return 0;
}
