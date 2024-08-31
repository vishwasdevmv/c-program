//TO FIND THE GREATEST OF THE INTEGER
#include<stdio.h>
int main()
{
    int a=45,b=46,c=55,d=230;
    if(a>b && a>c && a>d )
    {
        printf("the greatest of all is %d",a);
    }
if(b>a && b>c && b>d )
    {
        printf("the greatest of all is %d",b);
    }
if(c>b && c>a && c>d )
    {
        printf("the greatest of all is %d",c);
    }
    if(d>b && d>c && d>a)
    {
        printf("the greatest of all is %d",d);
    }
    return 0;
}
