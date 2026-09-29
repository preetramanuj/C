#include<stdio.h>
int main()
{
	int i,a[7]={9,3,1,6,10,5,4},max=a[0];
	for(i=0;i<7;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("Maxium number is:%d",max);	
}
