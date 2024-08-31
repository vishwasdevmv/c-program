#include<stdio.h>
int main()
{
 int num1=10,num2=20;
 int temp;
 printf("before the swap:\n");
 printf("the value of first number %d\n",num1);
 printf("the value of second number %d\n",num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
printf("after the swap:\n");
printf("the vaule of first number%d\n",num1);
printf("the value of second number %d\n",num2);    
    return 0;

}
