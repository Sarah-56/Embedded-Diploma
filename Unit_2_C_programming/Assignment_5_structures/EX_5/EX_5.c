/*
 * EX_5.c
 *
 *  Created on: Sep 20, 2021
 *      Author: Sarah
 */

#include <stdio.h>

#define PI 3.14159
#define AREA(radius)(PI * radius * radius)


int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int radius;
	printf("Enter the radius: ");
	scanf("%d", &radius);
	printf("Area = %.2f", AREA(radius));
	return 0;
}
