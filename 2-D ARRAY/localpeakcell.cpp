#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void localPeakCell(int **arr,int n,int m){
	int count=0;
	for(int row=0;row<n;row++){
		for(int col=0;col<m;col++){
			int isPeak = 1;
			int current = *(*(arr+row)+col);
			if(row<current)
		}
	}
	printf("Peak cell: %d", count);
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
			scanf("%d", *(arr+row)+col);
		}
	}
	localPeakCell(arr,n,m);
}
