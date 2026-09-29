#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=12;i++)
	{
		for(j=i;j<=9;j++)
		{
			if(i==6 || i==7)
			{
				printf("*",i,j);
			}
			printf("\n");
		}
	}
	
}
