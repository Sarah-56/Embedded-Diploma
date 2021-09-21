/*
 * EX_1.c
 *
 *  Created on: Sep 20, 2021
 *      Author: Sarah
 */

#include <stdio.h>

struct student{
	char name[20];
	int roll;
	float marks;
};


int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct student S1;
	printf("Enter information of students: \n");
	printf("Enter name: ");
	scanf("%s", S1.name);
	printf("Enter roll number: ");
	scanf("%d", &S1.roll);
	printf("Enter marks: ");
	scanf("%f", &S1.marks);
	printf("\nDisplaying information\n");
	printf("Name: %s\n", S1.name);
	printf("Roll: %d\n", S1.roll);
	printf("Marks: %.2f\n", S1.marks);
	return 0;
}
