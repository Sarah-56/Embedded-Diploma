/*
 * Ex_1.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */

#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char string[100], ch;
	printf("Enter a string: ");
	gets(string);
	printf("Enter a character to find frequency: ");
	scanf("%c", &ch);
	int i = 0, count = 0;
	while(string[i] != '\0'){
		if(string[i] == ch){
			count++;
		}
		i++;
	}
	printf("Frequency of %c = %d", ch, count);
	return 0;
}
