#include<stdio.h>
int main()
{
	int i,j,k,num;
	printf("Enter num:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);	
		}
		printf("\n");
	}
	for(k=num;k>=1;k--)
	{
		for(j=k;j>=1;j--)
		{
			printf("%d",k);	
		}
		printf("\n");	
	}
}

//for(j=i;j<=num;j++) ultu print


