// TO FIND THE AREA OF THE RECTANGLE
// AREA= LENGTH * BREADTH
/*
#include<stdio.h>
int main(){
    int length = 10;
    int breadth = 5;
    printf(" the area of the rectangle is %d",length*breadth);
}
*/


//TO TAKE INPUT FROM USER


#include<stdio.h>
int main()
{
    int length,breadth;
    printf(" enter the  length\n ");
    scanf("%d",&length);
    printf(" enter the breadth\n");
    scanf("%d",&breadth);
    printf("the area of the rectangle is %d",length*breadth);
    return 0;
}
