#include<stdio.h>
int main()
{
    int i=50;
    int*ptr=&i;
    printf("the adrees of the i is %p\n",&i);
    printf("the adrees of the i is %p\n",ptr);
    printf("the adrees of the i is %d\n",*ptr);
    return 0;
}