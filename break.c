#include <stdio.h>
int main()
{
    for (int i = 0; i <= 15; i++)
    {
        if (i == 5)
        {
            break;              //EXIT THE LOOP NOW
        }
        printf("%d\n", i);
    }
    return 0;
}