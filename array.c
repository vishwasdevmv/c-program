#include<stdio.h>
int main()
{
    int i;
    int marks[5];
    printf("enter the value of marks\n");
    for(int i=0;i<4;i++){
    
    scanf("%d",&marks[i]);

    }
    for(i=0;i<4;i++){

    printf("the marks of the student %d is %d\n",i,marks[i]);
    }

    return 0;
}