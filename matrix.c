
#include <stdio.h>
#include <string.h>

void matrices_addition()

{
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
        printf("Enter the elements of the Matrix %d: \n", k + 1);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("Element(%d)(%d): ", i + 1, j + 1);
                scanf("%d", &matrices[k][i][j]);
            }
        }
    }
    printf("\n\n");

    for (int k = 0; k < n; k++)
    {
        printf("Matrix %d: \n", k + 1);
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
                result[i][j] = result[i][j] + matrices[k][i][j];
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

void matrices_subtraction()
{
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
        printf("Enter the elements of Matrix %d: \n", k + 1);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("Element(%d)(%d): ", i + 1, j + 1);
                scanf("%d", &matrices[k][i][j]);
            }
        }
    }

    printf("\n\n");

    for (int k = 0; k < n; k++)
    {
        printf("Matrix %d:\n", k + 1);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("%d ", matrices[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    int result[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[i][j] = matrices[0][i][j];
        }
    }

    for (int k = 1; k < n; k++)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                result[i][j] -= matrices[k][i][j];
            }
        }
    }

    printf("RESULTANT MATRIX (After Subtraction):\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void matrix_multiplication3x3()
{
    int matrix1[3][3];
    int matrix2[3][3];

    printf("Enter the elements of Matrix A: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element(%d)(%d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of Matrix B: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element(%d)(%d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Matrix A: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    int result[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] * matrix2[i][j] + matrix1[i][j] * matrix2[i][j] + matrix1[i][j] * matrix2[i][j];
        }
    }

    printf("RESULTANT MATRIX (After multiplcation): \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void matrix_multiplication2x2()
{
    int matrix1[2][2];
    int matrix2[2][2];

    printf("Enter the elements of Matrix A: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Element(%d)(%d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of Matrix B: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Element(%d)(%d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Matrix A: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    int result[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = matrix1[i][j] * matrix2[i][j] + matrix1[i][j] * matrix2[i][j];
        }
    }

    printf("RESULTANT MATRIX (After multiplcation): \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void matrix_transpose()
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    printf("Enter the elements of the Matrix: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Element(%d)(%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix (%d X %d): \n", rows, columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the Matrix (%d X %d): \n", rows, columns);

    for (int j = 0; j < columns; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrix_determinant()
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    if ((rows == columns) && ((rows == 2) && (columns == 2)))
    {
        int matrix[rows][columns];
        printf("Enter the elements of the Matrix: \n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("Element(%d)(%d): ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
        }
        int determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][1];
        printf("Determinant of the Matrix is: %d", determinant);
    }
    else if (rows != columns)
    {
        printf("Determinant can only be calculated for square matrix.");
    }
    else if ((rows == columns) && ((rows == 3) && (columns == 3)))
    {
        int matrix[rows][columns];
        printf("Enter the elements of the Matrix: \n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("Element(%d)(%d): ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
        }
        int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                          matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                          matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
        printf("Determinant of the Matrix is: %d", determinant);
    }
    else
    {
        printf("Determinant calculation for matrix order greater than 3x3 is not available.");
    }
}
void rank_of_the_matrix()
{
    int rows, columns;
    printf("Enter thr number of rows: ");
    scanf("%d", &rows);
    printf("Enter thr number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    printf("Enter the elements of the Matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Element(%d)(%d): ");
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    char operation[20];
    printf("This is a multi-matrix calculator.\n");
    printf("Available operations: Addition = 1, Subtraction = 2, Transpose = 3, Determinant(2x2)(3x3) = 4,\nRank of th4 matrix = 5 and multiplication (2x2 and 3x3 ) = 6.\n");
    printf("Enter operation: ");
    fgets(operation, sizeof(operation), stdin);

    if (strcasecmp(operation, "1") == 0)
    {
        matrices_addition();
    }
    else if (strcasecmp(operation, "2\n") == 0)
    {
        matrices_subtraction();
    }
    else if (strcasecmp(operation, "6\n") == 0)
    {
        char order[5];
        printf("Enter the order (2x2)(3x3): ");
        scanf("%s", order);

        if (strcasecmp(order, "2x2") == 0)
        {
            matrix_multiplication2x2();
        }
        else if (strcasecmp(order, "3x3") == 0)
        {
            matrix_multiplication3x3();
        }
        else
        {
            printf("Order not available :(");
        }
    }
    else if (strcasecmp(operation, "3\n") == 0)
    {
        matrix_transpose();
    }
    else if (strcasecmp(operation, "4\n") == 0)
    {
        matrix_determinant();
    }
    else if (strcmp(operation, "5\n") == 0)
    {
        rank_of_the_matrix();
    }
    else
    {
        printf("INVALID INPUT!");
    }

    return 0;
}
