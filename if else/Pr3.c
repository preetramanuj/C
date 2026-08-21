//Using only if
#include<stdio.h>
int main()
{
    int num1=0,num2=0;
    printf("Enter Number1 and Number2:",num1,num2);
    scanf("%d%d",&num1,&num2);
    if((num1%2 != 1 && num1 !=0) && (num2%2 != 1 && num2 !=0))  //EE
    {
        printf("%d and %d both are even number",num1,num2);
    }
    if(num1%2 != 0 && num2%2 !=0)  //OO
    {
        printf("%d and %d both are odd number",num1,num2);
    }
    if(num1%2 != 0 && (num2%2 != 1 && num2 !=0))  //OE
    {
        printf("%d is odd and %d is even number",num1,num2);
    }
    if((num1%2 != 1 && num1 !=0)  && num2%2 !=0) //EO
    {
        printf("%d is even and %d is odd number",num1,num2);
    }
    if(num1 == 0 && num2 ==0) //ZZ
    {
        printf("%d and %d both are zero",num1,num2);
    }
    if(num1 == 0 && (num2%2 != 1 && num2 !=0)) //ZE
    {
        printf("%d is zero and %d is even number",num1,num2);
    }
    if((num1%2 != 1 && num1 !=0) && num2 ==0) //EZ
    {
        printf("%d is even and %d is zero number",num1,num2);
    }
    if(num1 == 0 && (num2%2 != 1 && num2 !=0)) //ZE
    {
        printf("%d is zero and %d is even number",num1,num2);
    }
    if(num1 == 0 && num2%2 !=0) //ZO
    {
        printf("%d is zero and %d is odd number",num1,num2);
    }
           
}