#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	printf("enter your number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	
}
