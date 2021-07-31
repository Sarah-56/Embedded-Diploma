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
	if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
		printf("%c is an alphabet", ch);
	else
		printf("%c is not an alphabet", ch);

	return 0;
}
