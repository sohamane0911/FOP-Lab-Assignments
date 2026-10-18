#include <stdio.h>

int main()
{
    int n, i, tar;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter the elements of the array: \n");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Entered array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
    
    printf("Enter the targate element: \n");
    scanf("%d", &tar);
    
    for (i=0; i<n; i++)
    {
        if(a[i] == tar)
        {
            printf("Targate %d element found at position %d", tar, i);
            break;
        }
        
        else
        {
            printf("Targate element not found:(");
            break;
        }
    }
    
    return 0;
}
