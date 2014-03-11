#include <stdio.h>
#include <stdlib.h>

struct tree{
	int value;
	struct value* top;
	struct value* right;
	struct value* bottom;
	struct value* left;
}; 

int arr[][5]= {
				{ 1, 2, 3, 4, 5},
				{6 , 7, 8, 9,10},
				{11,12,13,14,15},
				{16,17,18,19,20},
				{21,22,23,24,25}
			};

int main(){	
	int i,j;
	int midx,midy;
	struct tree *root,*temp;
	root = (struct tree*)malloc(sizeof(struct tree*));
	printf("Printing the normal tree\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("\t%d ",arr[i][j]);
		}
		printf("\n");
	}
	midx = (5-1)/2;
	midy = (5-1)/2;
	printf("\nMid Element: %d\n",arr[midx][midy]);

	root->value = arr[midx][midy];
	root->top = NULL;
	root->right = NULL;
	root->bottom = NULL;
	root->left = NULL;

	//Setting the top child 
	temp = (struct tree*)malloc(sizeof(struct tree*));
	temp->value = arr[midx][midy-1];
	temp->top = NULL;
	temp->right = NULL;
	temp->bottom = (struct tree*)malloc(sizeof(struct tree*));
	temp->bottom = root;
	temp->left = NULL;
	
	// root->top = (struct tree*)malloc(sizeof(struct tree*));
	// root->top = temp;

	//Setting the right child 
	// temp = (struct tree*)malloc(sizeof(struct tree*));
	// temp->value = arr[midx+1][midy];
	// temp->top = NULL;
	// temp->right = NULL;
	// temp->bottom = NULL;
	// temp->left = root;
	// root->top = temp;
	
	// printf("Element: %d \n",root->top);	
	
	return 0;

}
