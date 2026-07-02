#include<stdio.h>
#include<stdlib.h>
/*int main(){
	char *s1 = (char*)malloc(25);
	char *s2 = (char*)malloc(25);
	scanf("%s %s", s1,s2);
	int i;
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]!=s2[i]){
			break;
		}
	}
	if(s1[i]=='\0'){
		printf("True");
	}
	else printf("False");
	return 0;
}*/

int main(){
	char *s1 = (char*)malloc(25);
	char *s2 = (char*)malloc(25);
	scanf("%s %s", s1,s2);
	int n;
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++){
		if(s1[i]!=s2[i]){
			break;
		}
	}
	if(i==n)printf("TRUE!");
	else printf("FALSE!");
	return 0;
}
