/*
 * Ex_1.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */

#include <stdio.h>

int isPrime(int num);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a, b;
	printf("Enter two numbers(intervals): ");
	scanf("%d %d", &a, &b);
	printf("Prime numbers between %d and %d: ", a, b);
	for(int i = a; i <= b; i++){
		switch(isPrime(i)){
		case 1:
			printf("%d ", i);
			break;
		case 0:
			break;
		}
	}
	return 0;
}
int isPrime(int num){
	if (num == 0 || num == 1) {
		return 0;
	}
	else {
		for (int j = 2; j <= num / 2; j++) {
			if (num % j == 0) {
				return 0;
				break;
			}
		}
	}
	return 1;
}
