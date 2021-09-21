/*
 * EX_3.c
 *
 *  Created on: Sep 20, 2021
 *      Author: Sarah
 */

#include <stdio.h>

struct complex{
	float real;
	float img;
};


int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct complex num1, num2, sum;

	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f%f", &num1.real, &num1.img);

	printf("\nFor 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f%f", &num2.real, &num2.img);

	sum.real = num1.real + num2.real;
	sum.img = num1.img + num2.img;
	printf("Sum = %.1f + %.1fi", sum.real, sum.img);
	return 0;
}
