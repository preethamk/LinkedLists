#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	
	int data;
	struct Node* next;
	
} NODE;

NODE* head = NULL;

void insert_begin(int d){
	
	NODE* temp = (NODE*) malloc(sizeof(NODE));
	temp->data = d;
	temp->next = head;
	head = temp;
}

void insert_end(int d){
	
	NODE* temp = (NODE*) malloc(sizeof(NODE));
	temp->data = d;
	temp->next = NULL;
	
	if(head==NULL){
		head = temp;
	}
	else{
		
		NODE* t = head;
		while(t->next!=NULL){
			t = t->next;
		}
		t->next = temp;
	}	
		
}

void print(){
	
	NODE* temp = head;
	
	while(temp!=NULL){
		
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL");
}

int main() {
	
	int i,n,d;
	printf("Number of inserts: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Enter number: ");
		scanf("%d", &d);
		insert_end(d);
	}
	
	print();
	return 0;
}
