/*
 * EX_4.c
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

	struct student S[10];

	printf("Enter information of students: \n");
	for(int i = 0; i < 10; i++){
		printf("\nFor roll number %d\n", i + 1);
		printf("Enter name: ");
		scanf("%s", S[i].name);
		printf("Enter marks: ");
		scanf("%f", &S[i].marks);
	}

	printf("\nDisplaying information of students:\n");
	for(int i = 0; i < 10; i++){
		printf("Information for roll number %d\n", i + 1);
		printf("Name: %s\n", S[i].name);
		printf("Marks: %f\n", S[i].marks);

	}

	return 0;
}
