#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter the value (Single character): ");
    scanf("%c", &ch);
    
    if (ch >= 'A' && ch <= 'Z'){printf("Capital");}
    else if (ch >= 'a' && ch <= 'z'){printf("Small");}
    else if (ch >= '0' && ch <= '9'){printf("Digit");}
    else printf("Special character");
    
    return 0;
}
