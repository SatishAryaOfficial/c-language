//sum of alldigits in number
#include<stdio.h>
#include<conio.h>
main()
{
	int dummy ,n,sum=0,x;
	printf("enter a number \n");
	scanf("%d",&n);
	dummy=n;
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
		
		}
	printf("the sum of all digit  in %d  is %d \n ",dummy,sum);
	
}
