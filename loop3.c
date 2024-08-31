#include <stdio.h>
int main()
{
    char ch = 'x';
    printf("enter the character is %d\n", ch);
    // 97 to 122
    if (ch >= 97 && ch <= 122)
    {
        printf("the character is lower case");
    }
    else
    {
        printf(" this is upper case");
    }
    return 0;
}