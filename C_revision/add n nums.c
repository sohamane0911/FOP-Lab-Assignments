#include <stdio.h>

int Add(int sums, int nums);

int main()
{
    int sum,nums, n, ans;
    
    sum = 0;
    ans = 0;
    
    printf("How many numbers do you want to add? ");
    scanf("%d", &n);
    
    printf("\nEnter %d numbers\n", n);
    
    for (int i=1; i<=n; i++)
    {
        if(i==1){printf("Enter the %dst number: ", i);}
        else if(i==2){printf("Enter the %dnd number: ", i);}
        else if(i==3){printf("Enter the %drd number: ", i);}
        else printf("Enter the %dth number: ", i);
        scanf("%d", &nums);
        
        sum = Add(sum, nums);
    }
    printf("Sum is %d", sum);
    
    return 0;
}

int Add(int sum, int nums)
{
    int result = sum+nums;
    return result;
}
