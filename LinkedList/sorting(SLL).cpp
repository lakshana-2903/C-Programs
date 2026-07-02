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
void sort(){
	struct node* temp = head;
	while(temp!=NULL){
		struct node* temp1 = temp->next;
		while(temp1!=NULL){
			if(temp->data > temp1->data){
				int x = temp1->data;
				temp1->data = temp->data;
				temp->data = x;
			}
			temp1 = temp1->next;
		}
		temp = temp->next;
	}
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
	sort();
	display();
}
