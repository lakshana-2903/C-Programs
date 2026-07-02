#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void matrixPassStrength(int **arr, int n, int m){
	int row_max = INT_MIN;
	int col_max = INT_MIN;
	for(int row=0;row<n;row++){
		int row_sum = 0;
		for(int col=0;col<m;col++){
			row_sum+= *(*(arr+row)+col);
		}
		if(row_sum>row_max){
			row_max = row_sum;
		}
	}
	for(int row=0;row<m;row++){
		int col_sum=0;
		for(int col=0;col<n;col++){
			col_sum+= *(*(arr+col)+row);
		}
		if(col_sum>col_max){
			col_max = col_sum;
		}
	}
	if(row_max > col_max){
		printf("MAX: %d", row_max);
	}
	else{
		printf("MAX: %d", col_max);
	}
}
int main(){
	int n,m;
	scanf("%d", &n);
	scanf("%d", &m);
	int **arr = (int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++){
		*(arr+i) = (int*)malloc(m*sizeof(int));
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", *(arr+i)+j);
		}
	}
	matrixPassStrength(arr,n,m);
}
