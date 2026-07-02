#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*head = NULL;
void insertAtEnd(int num){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = num;
	newNode->next = NULL;
	if(head==NULL){
		head = newNode;
		return;
	}
	struct node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}
void search(int elem){
	struct node* temp = head;
	int index = 1;
	while(temp!=NULL){
		if(temp->data == elem){
			printf("Element found at index: %d",index);
			return;
		}
		index++;
		temp = temp->next;
	}
	printf("Element Not Found!");
}
void display(){
	struct node* temp = head;
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main(){
	int n,num;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &num);
		insertAtEnd(num);
	}
	int elem;
	scanf("%d", &elem);
	search(elem);
}
