/*
 * Ex_3.c
 * Created on: Aug 1, 2021
 * Author    : Sarah
 */


#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a[50][50];
	int rows, columns;
	printf("Enter rows and columns of matrix: ");
	scanf("%d %d", &rows, &columns);
	printf("\nEnter elements of matrix:\n");
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			printf("Enter elements a%d%d: ",i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEntered Matrix:\n");
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of Matrix:\n");
		for(int i = 0; i < columns; i++){
			for(int j = 0; j < rows; j++){
				printf("%d ", a[j][i]);
			}
			printf("\n");
		}
	return 0;
}
