/*
 * Ex_1.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */


#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float A[2][2], B[2][2];
	printf("Enter the elements of 1st matrix\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter a%d%d: ", i + 1, j + 1);
			scanf("%f", &A[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	fflush(stdout);
	fflush(stdin);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter b%d%d: ", i + 1, j + 1);
			scanf("%f", &B[i][j]);
			B[i][j] += A[i][j];
		}
	}
	printf("Sum of matrix:\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%.1f	", B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
