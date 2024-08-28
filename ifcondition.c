/*#include<stdio.h>
int main()
{
    int temperature;
    printf("enter the temperature\n");
    scanf("%d",&temperature);
    if( temperature<20)
    {
        printf("wear the sweater and drink hot water\n");

    }
    else{
        printf("the user input is inavalid");

    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int temperature;
    printf("Enter the temperature\n");
    scanf("%d",&temperature);
    if(temperature<=20)
    {
        printf("you should wear the sweater and drink hot water");

    }
    else if (temperature>20 && temperature<70)
    {
        printf("the sandeep will die");
    }
    else
    {
        printf("the temperature is not possible");

    }
return 0;
}*/


/*#include<stdio.h>
int main()
{
    int age;
    printf("enter the age of the person\n");
    scanf("%d",&age);
    if(age>20)
    {
         printf("big brother sandesh");
    }
    else if(age<20)
    {
        printf("small brother vishwas");
    
    }
    else{
        printf("non of the family member");
    
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int age;
    char id;
    printf("enter the age of the person");
    scanf("%d",&age);

    if(age<18)
    {
        printf("you are not elegible for voting");
    }
        else if(age==18)
        {
                    printf("if you have voter id then press y");
                     scanf("%s",&id);
        if(id =='y')
        {
            printf("you are eligible for voting");
        }
        else
        {
            printf("apply for voter id");
        
        }

    }
             else if(age>18)
                {
                        printf("if you have voter id,then press y");
                        scanf("%s",&id);
            if(id=='y')
             {
                     printf("you are elegible for voting");
              }
             else
            {
                  printf("you are not eligible");
              }

                    }
         return 0;

        }