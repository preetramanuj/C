#include<stdio.h>
int main()
{
	int temp,original,num,result;
	printf("Enter Number:");
	scanf("%d",&num);
	original=num;
	
	while(num>0)
	{
		result=num%10;
		temp=(temp*10)+result;
		num /=10;
	}
	if(temp==original)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is not Amstrong");
	}
}

