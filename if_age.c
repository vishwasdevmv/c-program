#include <stdio.h>
int main()
{
    int age = 50;
    if (age > 10)
    {
        printf("we are inside\n");
        printf("you are age is greater than 10\n");
    }
    if (age % 5 == 0)//if we divide age by 5 remainder should be 0 then it will be exicuted
    {
        printf("we are inside the another if\n");
        printf("you are age is divisble by 50\n");
    }
    return 0;
}
