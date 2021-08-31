/*
 * Ex_5.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */


#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int data[100], size, num, index;
	printf("Enter no of elements: ");
	scanf("%d", &size);
	for(int i = 0; i < size; i++){
		scanf("%d", &data[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d", &num);
	for(int i = 0; i < size; i++){
		if(num == data[i]){
			index = i + 1;
			printf("Number found at the location = %d", index);
			return 0;
		}
	}
	printf("the number isn't found :(");

	return 0;
}
