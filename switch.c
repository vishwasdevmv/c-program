#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you enterd the 10\n");
        break;
    case 2:
        printf("you enterd the 20\n");
        break;
    case 3:
        printf("you enterd the 30\n");
        break;
    default:
        printf("nothing is here");
        break;
    }
    return 0;
}