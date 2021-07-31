/*
 * Ex_8.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */

#include <stdio.h>

int main(){
	char choice;
	float x, y;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdout);
	scanf("%c", &choice);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f", &x, &y);
	switch(choice){
			case '+':{
				printf("%f + %f = %f", x, y, x + y);
				break;
			}
			case '-':{
				printf("%f - %f = %f", x, y, x - y);
				break;
			}
			case '*':{
				printf("%f * %f = %f", x, y, x * y);
				break;
			}
			case '/':{
				printf("%f / %f = %f", x, y, x / y);
				break;
			}
		}
	return 0;
}
