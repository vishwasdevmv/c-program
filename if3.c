#include <stdio.h>
int main()
{
    int age = 100;
    if (age > 18 && age < 80)
    {
        printf("you can drive");
    }
    else if (age == 18)
    {
        printf("you are adult ");
    }
    else if (age > 65 && age < 80)
    {
        printf("you can drive and you are a senior citizen");
    }
    else
    {
        printf("you are grandfather");
    }

    return 0;
}