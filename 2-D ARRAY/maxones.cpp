#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void maxConsecOne(int **arr,int n,int m){
	int index;
	int max = INT_MIN;
	for(int row=0;row<n;row++){
		int max_count=0;
		int count=0;
		for(int col=0;col<m;col++){
			if(*(*(arr+row)+col) != 1){
				count=0;
			}
			else{
				count++;	
			}
			if(max_count<count){
				max_count = count;
			}
		}
		if(max<max_count){
			max = max_count;
			index = row;
		}	
	}
	printf("%d %d", index,max);
}
int main(){
	int n,m;
	scanf("%d", &n);
	scanf("%d", &m);
	int **arr = (int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++){
		*(arr+i) = (int*)malloc(n*sizeof(int));
	}
	for(int row=0;row<n;row++){
		for(int col=0;col<m;col++){
			scanf("%d", *(arr+row)+col);
		}
	}
	maxConsecOne(arr,n,m);
}
