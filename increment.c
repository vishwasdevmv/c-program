/*#include<stdio.h>
int main()
{
    int i=5;
    i=i+5;
    printf(" the value of i is %d\n",i);
    return 0;

}
THE OUTPUT IS 10 */
#include<stdio.h>
int main()
{
    int i=5;
    i=i+5;
    printf(" the value of i is %d\n",i);
   // i++;
   // printf(" the value of i is %d\n",i);
    //printf(" the value of i is %d\n",i++);
    // printf(" the value of i is %d\n",i++);//10
     printf(" the value of i is %d\n",++i);
    return 0;

}
//i++ prints i first and then increments i(post increment operator)
//++i increments first and then prints i (pre increment operator)