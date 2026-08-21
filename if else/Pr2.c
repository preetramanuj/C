#include<stdio.h>
int main()
{
    int num1=0,num2=0;
    char name1[50],name2[50];
    printf("Enter name1:");
    scanf("%s",&name1);
    printf("Enter age of %s:",name1);
    scanf("%d",&num1);
    printf("Enter name2:");
    scanf("%s",&name2);
    printf("Enter age of %s:",name2);   
    scanf("%d",&num2); 
    if(num1==18 && num2==18)  //VV     
    {
        printf("%s and %s are eligible for voting",name1,name2);
    }
    if(num1<0 && num2<0)   //NN
    {
        printf("%s and %s are not valid for voting",name1,name2);   
    }
    if(num1<18 && num2<18)   //II
    {
        printf("%s and %s are ineligible for voting",name1,name2);
    }
    if(num1>18 && num2<18)  //VN
    {
        printf("%s is eligible for voting and %s is not eligible for voting",name1,name2);
    }
    if(num1<18 && num2>18)  //NV
    {
        printf("%s is  not eligible for voting and %s is eligible for voting",name1,name2);   
    }
    if(num1<0 && num2>18)  //IV
    {
        printf("%s is not valid for voting and %s is eligible for voting",name1,name2);
    }
    if(num1>18 && num2<0)  //VI
    {
        printf("%s is valid for voting and %s is not eligible for voting",name1,name2);
    }
    if(num1<0 && num2<18)  //IN
    {
        printf("%s is invalid for voting and %s is ineligible for voting",name1,name2);
    }
    if(num1<18 && num2<0)  //NI
    {
        printf("%s is ineligible for voting and %s is invalid for voting",name1,name2);
    }
}
