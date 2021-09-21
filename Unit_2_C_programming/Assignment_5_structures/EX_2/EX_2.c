/*
 * EX_2.c
 *
 *  Created on: Sep 20, 2021
 *      Author: Sarah
 */

#include <stdio.h>

struct distance{
	int feet;
	float inch;
};


int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct distance d1, d2, sum;
	printf("Enter information of 1st distance \n");
	printf("Enter feet: ");
	scanf("%d", &d1.feet);
	printf("Enter inch: ");
	scanf("%f", &d1.inch);
	printf("\nEnter information of 2nd distance \n");
	printf("Enter feet: ");
	scanf("%d", &d2.feet);
	printf("Enter inch: ");
	scanf("%f", &d2.inch);
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	while(sum.inch >= 12.0){
		sum.inch -= 12.0;
		sum.feet++;
	}
	printf("\nSum of distances = %d\'-%.1f\"", sum.feet, sum.inch);

	return 0;
}
