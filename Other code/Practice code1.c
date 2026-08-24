//0 to 999 Armstrong
#include<stdio.h>
int main()
{
	int a=100,s,r,c;
	while(a<999)
	{
		c=a;
		s=0;
		while(c>0)
		{
			r=c%10;
			s=s+(r*r*r);
			c=c/10;
		}	
		if(s == a )
		{
			printf("%d\n",a);
		}
	a++;
	}

}
