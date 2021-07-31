/*
 * Ex_2.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */

#include <stdio.h>

int main(){
	char input;
	printf("Enter an alphabet: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &input);
	switch(input){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':{
			printf("%c is a vowel", input);
			break;
		}
		default:{
			printf("%c is a consonant", input);
			break;
		}
	}
	return 0;
}
