#include<stdio.h>
int main()
{
	int i,j,temp,a[7]={9,3,1,6,10,5,4};
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
		printf("Sorted array is:%d\n",a[i]);
	}
}
