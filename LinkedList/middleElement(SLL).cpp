#include<stdio.h>
#include<stdlib.h>
int count = 0;
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
	count++;
}
void findMidElem(){
	struct node* temp = head;
	int mid = count/2;
	while(mid>0){
		temp = temp->next;
		mid--;
	}
	printf("%d", temp->data);
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
	findMidElem();
}
