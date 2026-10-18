#include <stdio.h>

int main()
{
    int rows, columns;
    int r, c, opr;
    
    printf("Enter the number of rows and columns you want to enter: \n");
    printf("Rows: "); scanf("%d", &rows);
    printf("Columns: "); scanf("%d", &columns);
    
    int l[rows][columns], m[rows][columns], n[rows][columns];
    
    printf("Enter the elements of the first matrix: \n");
    
    for (r=0; r<rows; r++)
    {
        for (c=0; c<columns; c++)
        {
            scanf("%d", &l[r][c]);
        }
    }
    
    printf("Enter the elements of the sencod matrix: \n");
    
    for (r=0; r<rows; r++)
    {
        for (c=0; c<columns; c++)
        {
            scanf("%d", &m[r][c]);
        }
    }
    
    printf("First matrix is:\n");
    for (r=0; r<rows; r++)
    {
        for (c=0; c<columns; c++)
        {
            printf("%d ", l[r][c]);
        }
        printf("\n");
    }
    
    printf("Second matrix is:\n");
    for (r=0; r<rows; r++)
    {
        for (c=0; c<columns; c++)
        {
            printf("%d ", m[r][c]);
        }
        printf("\n");
    }
    
    printf("Choose the option to perform on the entered matrices\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &opr);
    
    if (opr == 1)
    {
        printf("Addition of two matrices entered is:\n");
        for(r=0; r<rows; r++)
        {
            for(c=0; c<columns; c++)
            {
                n[r][c] = l[r][c] + m[r][c];
                printf("%d\t", n[r][c]);
            }
            printf("\n");
        }
    }
    
    if (opr == 2)
    {
        printf("Subtraction of two matrices entered is:\n");
        for(r=0; r<rows; r++)
        {
            for(c=0; c<columns; c++)
            {
                n[r][c] = l[r][c] - m[r][c];
                printf("%d\t", n[r][c]);
            }
            printf("\n");
        }
    }
    
    if (opr == 3)
    {
        printf("Subtraction of two matrices entered is:\n");
        for(r=0; r<rows; r++)
        {
            for(c=0; c<columns; c++)
            {
                n[r][c] = l[r][c] * m[r][c];
                printf("%d\t", n[r][c]);
            }
            printf("\n");
        }
    }
    
    if (opr == 4)
    {
        printf("Subtraction of two matrices entered is:\n");
        for(r=0; r<rows; r++)
        {
            for(c=0; c<columns; c++)
            {
                n[r][c] = l[r][c] - m[r][c];
                printf("%d\t", n[r][c]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
