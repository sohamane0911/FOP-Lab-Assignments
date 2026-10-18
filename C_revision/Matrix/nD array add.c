#include <stdio.h>

int main()
{
    int rows, columns;
    int r, c, sum;
    
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
    return 0;
}
