#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void chessBoardPattern(int **arr, int n, int m){
	for(int row=0;row<n-1;row++){
		for(int col=0;col<m-1;col++){
			if(*(*(arr+row) + col) != 0 && *(*(arr+row) + col) != 1 ){
				printf("INVALID!");
				return;
			}
			if(*(*(arr+row) + col) == *(*(arr+row) + (col+1)) || *(*(arr+row) + col) == *(*(arr+row+1) + col)){
				printf("INVALID!");
				return;
			}
		}
	}
	printf("VALID!");
}
int main(){
	int n,m;
	scanf("%d", &n);
	scanf("%d", &m);
	int **arr = (int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++){
		*(arr+i) = (int*)malloc(m*sizeof(int));
	}
	for(int row=0;row<n;row++){
		for(int col=0;col<m;col++){
			scanf("%d", *(arr+row) + col);
		}
	}
	chessBoardPattern(arr,n,m);
}
