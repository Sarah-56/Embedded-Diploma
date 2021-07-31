/*
 * Ex_3.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */

#include <stdio.h>

int main(){
	float num, max;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f", &num);
	max = num;
	for(int i = 1; i < 3; i++){
		scanf("%f", &num);
		if(num > max)
			max = num;
	}
	printf("Largest number = %f", max);
	return 0;
}
