#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	
	int data;
	struct Node* next;
	
} NODE;

//NODE* head = NULL;

void print(NODE* head){
	
	NODE* temp = head;
	
	printf("List: ");
	while(temp!=NULL){
		
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL");
}

NODE* insert_begin(NODE* head, int d){
	
	NODE* temp = (NODE*) malloc(sizeof(NODE));
	temp->data = d;
	temp->next = head;
	
	head = temp;
	print(head);
	
	return head;
}

NODE* insert_end(NODE* head, int d){
	
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
	print(head);
	
	return head;	
		
}



int main() {
	
	int i,n,d,c;
	NODE* head = NULL;
	printf("Number of inserts: ");
	scanf("%d",&n);
	
	printf("\nChoose 1 for insert at beginning or 2 for insert at end: ");
	do{
		scanf("%d",&c);
		if(c==1){
			printf("\nInsert at beginning selected\n");
		}
		else if(c==2){
			printf("\nInsert at end selected\n");
		}
	}while((c!=1)&&(c!=2));
	
	for(i=0;i<n;i++){
		
		printf("\nEnter number: ");
		scanf("%d", &d);
		if(c==1){
			head = insert_begin(head, d);
		}
		else{
			head = insert_end(head, d);
		}
		
	}
	
	return 0;
}
