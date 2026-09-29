#include<stdio.h>
int main()
{
	int sum=0,i,a[5]={9,3,6,2,8};
	printf("%d\n",a[0]);
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
		sum+=a[i];	
	}
	printf("\nsum of element is:%d",sum);
}
