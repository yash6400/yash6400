#include <stdio.h>
int main()
{
	int size,i,j;
    int A[size][size]; 
    int B[size][size]; 
    int C[size][size];
	printf("enter the value of size\n"); 
    scanf("%d",&size);
    printf("Enter elements in matrix A of size : \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements in matrix B of size : \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
     for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
     for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}