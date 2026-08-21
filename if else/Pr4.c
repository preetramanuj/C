//Using if else
#include<stdio.h>
int main()
{
    int num1=0,num2=0;
    printf("Enter Number1 & Number2:");
    scanf("%d%d",&num1,&num2);
    if((num1%2 == 0 && num2%2) && (num1 != 0 && num2 != 0))   //EE
    {
        printf("%d & %d both are even",num1,num2);
    }
    else if((num1%2 != 0 && num2%2 != 0) && (num1 != 0 && num2 != 0))   //OO
    {
        printf("%d & %d both are 0dd",num1,num2);
    }
    else if((num1%2 == 0 && num2%2 != 0) && (num1 != 0 && num2 != 0))  //EO
    {
        printf("%d is even and %d is odd number",num1,num2);
    }
    else if ((num1%2 != 0 && num2%2 == 0) && (num1 != 0 && num2 != 0))    //OE
    {
        printf("%d is odd and %d is even number",num1,num2);   
    }
    else if (num1 == 0 && num2 == 0)   //ZZ
    {
        printf("%d & %d both are zero",num1,num2);
    }
    else if (num1 == 0 && (num2%2 == 0 && num2 != 0))     //ZE
    {
        printf("%d is zero and %d is even number",num1,num2);
    }
    else if ((num1%2 == 0 && num1 != 0) && num2 != 0)     //EZ
    {
        printf("%d is even and %d is zero number",num1,num2);
    }
    else if (num1 == 0 && (num2%2 != 0 && num2 != 0))  //ZO
    {
        printf("%d is zero and %d is odd number",num1,num2);
    }
    else if ((num1%2 != 0 && num1 != 0) && num2 == 0)     //OZ
    {
        printf("%d is odd and %d is zero number",num1,num2);
    }
    else
    {
        printf("Invalid input");
    }   
}