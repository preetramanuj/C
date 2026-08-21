#include<stdio.h>
int main()
{
    int num1=0,num2=0;
    char name1[100],name2[100];
    printf("Enter name1:");
    scanf("%s",&name1);
    printf("Enter age of %s:",name1);
    scanf("%d",&num1);
    printf("Enter name2:");
    scanf("%s",&name2);
    printf("Enter age of %s:",name2);   
    scanf("%d",&num2); 
    if(num1>num2)
    {
        printf("%s is %d years bigger than %s",name1,num1-num2,name2);
    }
    else
    {
        printf("%s is %d years bigger than %s",name2,num2-num1,name1);
    }
}