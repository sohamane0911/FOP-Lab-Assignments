# include <stdio.h>

int Add(int a, int b);
int Sub(int a, int b);
int Pro(int a, int b);
int Div(int a, int b);


int main()
{
    int sum;
    int diff;
    int pro;
    int divi;
    int a, b;
    int cho;
    
    printf("Choose any one\n\n1. Add\n2. Sub\n3. pro\n4. div\n\n");
    scanf("%d", &cho);
    printf("First no: "); scanf("%d", &a);
    printf("Second no: "); scanf("%d", &b);
    
    if (cho == 1)
    {
        sum = Add(a, b);
        printf("Sum = %d", sum);
    }
    
    if (cho == 2)
    {
        diff = Sub(a, b);
        printf("Sub = %d", diff);
    }
    
    if (cho == 3)
    {
        pro = Pro(a, b);
        printf("pro = %d", pro);
    }
    
    if (cho == 4)
    {
        divi = Div(a, b);
        printf("divi = %d", divi);
    }
    return 0;
}



int Add(int a, int b)
{
    int result = a+b;
    return result;
}

int Sub(int a, int b)
{
    int result = a-b;
    return result;
}

int Pro(int a, int b)
{
    int result = a*b;
    return result;
}

int Div(int a, int b)
{
    int result = a/b;
    return result;
}
