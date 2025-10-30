#include <stdio.h>
#include<string.h>

void matrices_addtion(){
    int n, rows, columns;

    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);


    int matrices[n][rows][columns];

    printf("\n\n");

    for (int k = 0; k < n; k++)
    {
        printf("Enter the elements of the Matrix %d: \n", k+1);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("Element(%d)(%d): ", i+1, j+1);
                scanf("%d", &matrices[k][i][j]);
            }
              
        }
        
    
    }
    printf("\n\n");

    for (int k = 0; k < n; k++)
    {
        printf("Matrix %d: \n", k+1);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("%d ", matrices[k][i][j]);
            }
            printf("\n");
        } 
    }
    int result[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[i][j] = 0;
        }
        
    }
    

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                result[i][j] = result[i][j]  + matrices[k][i][j];
            }
            
        }
        
    }

    printf("RESULTANT MATRIX: \n");
        
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        } 

}

void matrices_subtraction() {
    int n, rows, columns;

    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrices[n][rows][columns];

    printf("\n\n");
    
    for (int k = 0; k < n; k++) {
        printf("Enter the elements of Matrix %d: \n", k + 1);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                printf("Element(%d)(%d): ", i + 1, j + 1);
                scanf("%d", &matrices[k][i][j]);
            }
        }
    }

    printf("\n\n");

    for (int k = 0; k < n; k++) {
        printf("Matrix %d:\n", k + 1);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                printf("%d ", matrices[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    int result[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrices[0][i][j];
        }
    }

    for (int k = 1; k < n; k++) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                result[i][j] -= matrices[k][i][j];
            }
        }
    }

    printf("RESULTANT MATRIX (After Subtraction):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {   
 
    char operation[20];
    printf("This is a multi-matrix calculator.\n");
    printf("Available operations: Addition and Subtraction.\n");
    printf("Enter operation: ");
    fgets(operation, sizeof(operation), stdin);

    if (strcasecmp(operation, "addition\n") == 0)
    {
        matrices_addtion();
    }
    else if (strcasecmp(operation, "subtraction\n") == 0)
    {
        matrices_subtraction();
    }
    else 
    {
        printf("INVALID INPUT!");
    }

    return 0;
}
