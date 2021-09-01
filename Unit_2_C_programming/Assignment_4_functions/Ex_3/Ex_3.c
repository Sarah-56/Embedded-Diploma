/*
 * Ex_3.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */

#include <stdio.h>
void reverse(char *str);
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char string[100];
	printf("Enter a sentence: ");
	gets(string);
	reverse(string);
	return 0;
}

void reverse(char *str){
	if (*str){
	   reverse(str+1);
	   printf("%c", *str);
   }
}
