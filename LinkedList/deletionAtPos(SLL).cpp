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
void deleteAtPos(int pos){
	if(head==NULL){
		return;
	}
	if(pos==1){
		struct node *t = head;
		head = head->next;
		t->next = NULL;
		free(t);
		return;
	}
	struct node* temp = head;
	while(pos>2 && temp->next->next!=NULL){
		temp = temp->next;
		pos--;
	}
	temp->next = temp->next->next;
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
	int pos;
	scanf("%d", &pos);
	deleteAtPos(pos);
	display();
}
