#include<stdio.h>
#include<stdlib.h>
void sum(int **arr,int n){
	for(int row=0;row<n;row++){
		int sum=0;
		for(int col=0;col<n;col++){
			sum += *(*(arr+row)+col);
		}
		printf("ROW %d: %d\n", row,sum);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int **arr = (int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++){
		*(arr+i)= (int*)malloc(n*sizeof(int)); // *(arr+i) -> i automatically multiplies with datatype size {i*4} internally
	}
	for(int row=0;row<n;row++){
		for(int col=0;col<n;col++){
			scanf("%d", *(arr+row)+col);
		}
	}
	sum(arr,n);
	free(arr);
	return 0;
}

