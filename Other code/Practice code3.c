//Print between two number
#include<stdio.h>
int main()
{
	int a,b,i,count=0;
	printf("Enter Number1 & Number2:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(i=a;i<b;i++)
		{
			if(i%2==0)
			{
				printf("\n%d",i);
				count++;			
			}					
		}
		printf("\n%d",count);
	}
	else if(a>b)
	{
		for(i=a;i>b;i--)
		{
			if(i%2==0)
			{
				printf("\n%d",i);
				count++;
			}
		}
		printf("\n%d",count);			
	}
	else
	{
		printf("\n%d",a);
	}	
}
