/*
 * Ex_4.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */


#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int data[100], num, location, size;
	printf("Output of Program: \n\n");
	printf("Enter no of elements: ");
	scanf("%d", &size);
	for(int i = 0; i < size; i++){
		scanf("%d", &data[i]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d", &num);
	printf("Enter the location: ");
	scanf("%d", &location);
	for(int i = size; i >= location - 1; i--){
		data[i] = data[i - 1];
	}
	data[location - 1] = num;
	for(int i = 0; i <= size; i++){
		printf("%d ", data[i]);
	}
	return 0;
}
