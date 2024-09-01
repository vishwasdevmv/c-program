#include <stdio.h>
int main()
{
    for (int i = 0; i <= 15; i++)
    {
        if (i == 5)
        {
            continue;              //EXIT THE ITERATION NOW AND THEN CONTINUE
        }
        printf("%d\n", i);
    }
    return 0;
}