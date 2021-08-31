/*
 * Ex_2.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */


#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char string[100];
	printf("Enter a string: ");
	gets(string);
	int i = 0;
	while(string[i] != '\0'){
		i++;
	}
	printf("Length of string: %d", i);
	return 0;
}
