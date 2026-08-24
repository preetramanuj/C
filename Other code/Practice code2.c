//Print between two number
#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter Number1 & Number2:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			printf("\n%d",i);
		}
	}
	else if(a>b)
	{
		for(i=a;i>=b;i--)
		{
			printf("\n%d",i);
		}
	}
	else
	{
		printf("\n%d",a);
	}	
}
