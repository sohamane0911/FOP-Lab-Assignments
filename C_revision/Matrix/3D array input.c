#include <stdio.h>

int main()
{
    int l[3][3], m[3][3], n[3][3];
    int r, c;
    
    printf("Enter the elements of the first matrix: \n");
    
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            scanf("%d", &l[r][c]);
        }
    }
    
    printf("Matrix is:\n");
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            
            
            printf("%d ", l[r][c]);
        }
        printf("\n");
    }
    
    
    return 0;
}
