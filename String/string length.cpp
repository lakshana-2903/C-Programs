#include<stdio.h>
#include<stdlib.h>
/*int main(){
	char *s = (char*)malloc(25);
	scanf("%s", s);
	int i = 0;
	while(s[i]!='\0'){
		i++;
	}
	printf("Size of string: %d", i);
	return 0;
}*/
void string(char *s, int n){
	int i=0;
	while(s[i]!='\0' && i < n){
		i++;	
	}
	printf("%d", i);
}
int main(){
	char *s = (char*)malloc(25);
	scanf("%[^\n]", s);
	int n;
	scanf("%d", &n);
	string(s,n);
}
