#include<stdio.h>
#include<conio.h>
int main()
{
	int dummy,n,rev=0,x;
	scanf("%d",&n);
	dummy=n;
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
		
	}
	printf("the reverse of %d is %d \n",dummy,rev);
	
}
