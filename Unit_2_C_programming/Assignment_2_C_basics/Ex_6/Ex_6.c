/*
 * Ex_6.c
 *
 *  Created on: Jul 31, 2021
 *      Author: Sarah
 */

#include <stdio.h>

int main(){
	int num, sum = 0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	for(int i = 1; i <= num; i++){
		sum += i;
	}
	printf("Sum  = %d", sum);
	return 0;
}
