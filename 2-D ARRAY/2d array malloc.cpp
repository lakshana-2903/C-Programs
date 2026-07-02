#include<stdio.h>
#include<stdlib.h>
void print(int **arr,int n){
	for(int row=0;row<n;row++){
		for(int col=0;col<n;col++){
			printf("%d ", *(*(arr+row)+col));
		}
		printf("\n");
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
	print(arr,n);
	free(arr);
	return 0;
}

