#include <stdio.h>

int main()
{
    int l[2][2], m[2][2], n[2][2];
    int r, c;
    
    printf("Enter the elements of the first matrix: \n");
    
    for (r=0; r<2; r++)
    {
        for (c=0; c<2; c++)
        {
            scanf("%d", &l[r][c]);
        }
    }
    
    printf("Matrix is:\n");
    for (r=0; r<2; r++)
    {
        for (c=0; c<2; c++)
        {
            
            
            printf("%d ", l[r][c]);
        }
        printf("\n");
    }
    
    
    return 0;
}
