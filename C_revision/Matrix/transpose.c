#include <stdio.h>

int main()
{
    int rows, columns;
    
    printf("Enter the number of rows and columns in the matrix: \n");
    printf("Rows: "); scanf("%d", &rows);
    printf("Columns: "); scanf("%d", &columns);
    
    int l[rows][columns], r, c;
    
    printf("Enter the elements of the matrix: \n");
    for(r=0; r<rows; r++)
    {
        for(c=0; c<columns; c++)
        {
            scanf("%d", &l[r][c]);
        }
        printf("\n");
    }
    
    printf("Elements in the matrix are: \n");
    for(r=0; r<rows; r++)
    {
        for(c=0; c<columns; c++)
        {
            printf("%d\t", l[r][c]);
        }
        printf("\n");
    }
    
    printf("Transpose of the matrix is: \n");
    for(r=0; r<rows; r++)
    {
        for(c=0; c<columns; c++)
        {
            printf("%d\t", l[c][r]);
        }
        printf("\n");
    }
    
    return 0;
}
