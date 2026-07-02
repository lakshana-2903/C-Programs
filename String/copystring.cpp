#include<stdio.h>
#include<stdlib.h>
int main(){
	char *s = (char*)malloc(25);
	scanf("%[^\n]", s);
	char *s1 = (char*)malloc(25);
	int i=0;
	while(s[i]!='\0'){
		s1[i] = s[i];
	}
	printf("%s", s1);
}
