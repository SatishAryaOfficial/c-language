//sum of n number
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d \n ",sum);
	
}


