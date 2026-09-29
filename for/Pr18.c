//i=row
//j=colum
#include<stdio.h>
int main()
{
	int i,j,k=5;
	for(i=1;i<=k;i++)
	{		
			for(j=1;j<=k-i+1;j++)
			{
				printf("*");
			}
			for(j=1;j<=2*i-2;j++)
			{
				printf(" ");
			}
			for(j=1;j<=k-i+1;j++)
			{
				printf("*");
			}
		
		printf("\n");
	}
//second half
	for(i=k-1;i>=1;i--)
	{		
			for(j=1;j<=k-i+1;j++)
			{
				printf("*");
			}
			for(j=1;j<=2*i-2;j++)
			{
				printf(" ");
			}
			for(j=1;j<=k-i+1;j++)
			{
				printf("*");
			}
		
		printf("\n");
	}	
}
