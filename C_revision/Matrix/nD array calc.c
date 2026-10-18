#include <stdio.h>

int main()
{
    int rows, columns;
    int r, c, opr;
    
    printf("Choose the option to perform: \n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n");
    scanf("%d", &opr);
    
        
    if (opr == 1 || opr == 2 || opr == 3)
    {
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
            printf("\n");
        }
        
        printf("Enter the elements of the sencod matrix: \n");
        
        for (r=0; r<rows; r++)
        {
            for (c=0; c<columns; c++)
            {
                scanf("%d", &m[r][c]);
            }
            printf("\n");
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
        
        switch(opr)
        {
            case 1:
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
            break;
            
            case 2:
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
            break;
            
            case 3:
            printf("Multiplication of two matrices entered is:\n");
            for(r=0; r<rows; r++)
            {
                for(c=0; c<columns; c++)
                {
                    n[r][c] = l[r][c] * m[r][c];
                    printf("%d\t", n[r][c]);
                }
                printf("\n");
            }
            break;
        }
    }
    
    else if(opr == 4)
    {
        printf("Enter the number of rows you want to enter: \n");
        printf("Rows: "); scanf("%d", &rows);
        
        int l[rows][rows];
        
        printf("Enter the elements of the matrix: \n");
        
        for (r=0; r<rows; r++)
        {
            for (c=0; c<rows; c++)
            {
                scanf("%d", &l[r][c]);
            }
            printf("\n");
        }
        
        printf("Your matrix is:\n");
        for (r=0; r<rows; r++)
        {
            for (c=0; c<rows; c++)
            {
                printf("%d ", l[r][c]);
            }
            printf("\n");
        }
        
        printf("Transpose of the matrix is:\n");
        for (r=0; r<rows; r++)
        {
            for (c=0; c<rows; c++)
            {
                printf("%d ", l[c][r]);
            }
            printf("\n");
        }
        
        
    }
        
    
    
    return 0;
}
