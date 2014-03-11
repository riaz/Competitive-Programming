#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
  int data;
  struct node *next;
};

int main()
{
	bool flag = true;
	int op,data;	
    /* This won't change, or we would lose the list in memory */
    struct node *head;       
    
    head = (struct node*)malloc( sizeof(struct node) );  
    head->next = 0;   
    head->data = 0;
    while(flag){
		printf("=====================================================\n");
		printf("======================LINKED LIST====================\n");
		printf("=====================================================\n");
		printf("1. Insert at the beginning\n");
		printf("2. Insert at the ending\n");
		printf("3. Remove element at beginning\n");
		printf("4. Remove from rear\n");
		printf("5. Display all the elements\n");
		printf("6. Exit\n");		
		printf("Choose options 1 to 6:\n");
		scanf("%d",&op);		
		switch(op){
			case 1:
				printf("Enter Data:");				
				scanf("%d",&data);
				struct node* temp;
				temp = (struct node*)malloc(sizeof(struct node));
				temp->data = data;
				temp->next = head;
				head = temp;
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				struct node* tem;
				tem = (struct node*)malloc(sizeof(struct node));
				break;				
			case 6: 
				flag = false;
				break;
			default:
				printf("Input between 1 and 6\n");	
		}
	}	
    

    return 0;
}
