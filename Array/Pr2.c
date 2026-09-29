#include<stdio.h>
int main()
{
	int i,l,a[l];
	printf("Enter the size of array:");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		printf("Enter the element in array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		printf("Your array is:%d\n",a[i]);
	}	
}
