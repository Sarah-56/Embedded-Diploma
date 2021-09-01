/*
 * Ex_4.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */

#include <stdio.h>

int power(int a, int b);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int base, pow;
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter power number(positive integer): ");
	scanf("%d", &pow);
	printf("%d^%d = %d", base, pow, power(base, pow));
	return 0;
}

int power(int a, int b) {
    if (b != 0)
        return (a * power(a, b - 1));
    else
        return 1;
}
