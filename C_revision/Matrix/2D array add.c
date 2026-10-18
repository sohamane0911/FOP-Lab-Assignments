#include <stdio.h>

int main()
{
    int l[2][2], m[2][2], n[2][2];
    int r, c, sum;
    
    printf("Enter the elements of the first matrix: \n");
    
    for (r=0; r<2; r++)
    {
        for (c=0; c<2; c++)
        {
            scanf("%d", &l[r][c]);
        }
    }
    
    printf("Enter the elements of the sencod matrix: \n");
    
    for (r=0; r<2; r++)
    {
        for (c=0; c<2; c++)
        {
            scanf("%d", &m[r][c]);
        }
    }
    
    printf("First matrix is:\n");
    for (r=0; r<2; r++)
    {
        for (c=0; c<2; c++)
        {
            printf("%d ", l[r][c]);
        }
        printf("\n");
    }
    
    printf("Second matrix is:\n");
    for (r=0; r<2; r++)
    {
        for (c=0; c<2; c++)
        {
            printf("%d ", m[r][c]);
        }
        printf("\n");
    }
    
    printf("Addition of two matrices entered is:\n");
    for(r=0; r<2; r++)
    {
        for(c=0; c<2; c++)
        {
            n[r][c] = sum ;
            sum = l[r][c] + m[r][c];
            
            printf("%d\t", sum);
        }
        printf("\n");
    }
    return 0;
}
