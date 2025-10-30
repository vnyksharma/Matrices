#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter no of rows: ");
    scanf("%d", &rows);
    printf("Enter no of columns: ");
    scanf("%d", &columns);

    int amatrix[rows][columns];

    printf("-------------------------");

    printf("\nEnter the Elements of the Matrix A: \n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &amatrix[i][j]);
        }
        
    }
    printf("The matrix A is: \n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%d ", amatrix[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------");

   int bmatrix[rows][columns];

    printf("\nEnter the Elements of the Matrix B: \n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &bmatrix[i][j]);
        }
        
    }
    printf("The matrix B is: \n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%d ", bmatrix[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------");

    int cmatrix[rows][columns];
    printf("\nMatrix A + Matrix B is: \n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%d ", amatrix[i][j] + bmatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}