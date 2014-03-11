#include <stdio.h>
#include <stdlib.h>

//This example shows how to declare a 2 Dimentionel array dynamically

extern int **alloc_array(int rows, int columns);

int **alloc_array(int rows, int columns)
{
    int i;
    int j;
    int **twoDary = (int**) (malloc(rows * sizeof(int*)));
    int **twoDaryStart = twoDary;
    int *currentrow;

    for ( i = 0; i < rows; i++ ){
        *(twoDary + i) =  (malloc(columns * sizeof(int)));
    }

    for (j = 0; j < rows; j++) {
        currentrow = *(twoDary + j);
        for ( i = 0; i < columns; i++ ) {
            *(currentrow + i) = i;
            printf("%d ", *(currentrow+i));
        }
        printf("\n");
    }  
    return twoDary;
}

int main(void)
{
	int i=0;
    int **d2 = alloc_array(5, 10);

    for (; i < 5; i++)
        free(d2[i]);
    free(d2);
    return(0);
}
