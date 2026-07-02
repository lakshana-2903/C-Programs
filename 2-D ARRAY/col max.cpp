#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void sum(int **arr,int n){
	for(int row=0;row<n;row++){
		int max = INT_MIN;
		for(int col=0;col<n;col++){						        	 
		    if(*(*(arr+col)+row)>max){
			max = *(*(arr+col)+row);
		    }
		}															
		printf("col_max %d: %d\n", row,max);						
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
	for(int i=0;i<n;i++){
		free(arr[i]);
	}
	free(arr);
	arr = NULL;
	return 0;
}

