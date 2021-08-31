/*
 * Ex_2.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */


#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float data[100], average = 0;
	int size;
	printf("Enter the numbers of data: ");
	scanf("%d", &size);
	for(int i = 0; i < size; i++){
		printf("%d. Enter number: ",i + 1);
		scanf("%f", &data[i]);
		average += data[i] / size;
	}
	printf("Average = %.2f", average);
	return 0;
}
