#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        printf("%dX%d=%d\n", n, i, n * i);
    }
    return 0;
}