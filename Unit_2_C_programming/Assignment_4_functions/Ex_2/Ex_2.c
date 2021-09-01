/*
 * Ex_2.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */

#include <stdio.h>

int fact(int num);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int number;
	printf("Enter a positive integer: ");
	scanf("%d", &number);

	printf("Factorial of %d = %d", number, fact(number));
	return 0;
}
int fact(int num){
	if(num == 0 || num == 1){
		return 1;
	}
	else{
		return num * fact(num - 1);
	}
}
