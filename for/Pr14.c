#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=8;i+=2)
	{		
		for(j=0;j<=i;j+=2)	
			{
				printf("%d",j);
				printf("%d",j+1);	
			}
		printf("\n");	
	}
}
// courent file
