#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
	int data;
	struct node* next;
};

struct node *end,*head,*temp;

listInitialize(){
	head = (struct node*)malloc(sizeof(struct node));
	end  = (struct node*)malloc(sizeof(struct node));
	head->next = end;
	end->next  = end; //end points to itself
}

deleteNext(struct node *t){
	temp = t->next;
	t->next = t->next->next;	
	free(temp);
}

struct node* insertAfter(int v,struct node* t){
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = v;
	temp->next = t->next;
	t->next = temp;
	return temp;
}

displayList(){
	temp = (struct node*)malloc(sizeof(struct node));
	temp = head->next;
	while(temp!=end){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}

struct node* findPrev(int data){
	temp = (struct node*)malloc(sizeof(struct node));
	temp = head->next;
	while(temp!=end && temp->next->data!=data){
		temp = temp->next;
	}
	return temp;
}

int main(){
	struct node *temp1;
	temp1 = (struct node*)malloc(sizeof(struct node));
	listInitialize();
	temp  = insertAfter(10,head);
	temp  = insertAfter(20,temp);
	temp1 = insertAfter(30,temp);
	temp  = insertAfter(40,temp); //deleting 40
	temp  = insertAfter(50,temp);		
	printf("Current Linked List Contents:\n");
	displayList();
	deleteNext(temp1);
	printf("\nLinked List Contents after deleting 40:\n");		
	displayList();	
	temp = findPrev(50);
	printf("\nPrevious of 50: %d\n",temp->data);
	temp = findPrev(20);
	printf("\nPrevious of 20: %d\n",temp->data);
	temp = findPrev(10);
	printf("\nPrevious of 10: %d\n",temp->data); //garbage
	temp = findPrev(end->data);
	printf("\nPrevious of end: %d\n",temp->data);

	return 0;
}
