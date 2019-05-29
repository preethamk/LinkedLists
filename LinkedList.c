#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	
	int data;
	struct Node* next;
	
} NODE;

NODE* head = NULL;

void print(){
	
	NODE* temp = head;
	
	printf("List: ");
	while(temp!=NULL){
		
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL");
}

void insert_begin(int d){
	
	NODE* temp = (NODE*) malloc(sizeof(NODE));
	temp->data = d;
	temp->next = head;
	head = temp;
	print();
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
	print();	
		
}



int main() {
	
	int i,n,d,c;
	printf("Number of inserts: ");
	scanf("%d",&n);
	
	printf("\nChoose 1 for insert at beginning or 2 for insert at end: ");
	do{
		scanf("%d",&c);
	}while((c!=1)&&(c!=2));
	
	for(i=0;i<n;i++){
		
		printf("\nEnter number: ");
		scanf("%d", &d);
		if(c==1){
			insert_begin(d);
		}
		else{
			insert_end(d);
		}
		
	}
	
	return 0;
}
