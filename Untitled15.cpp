#include<stdio.h>
#include<stdio.h>
int main()
{
	float b,d,h,g,p;
	printf("enter your salar");
	scanf("%f",&b);
	
	h=0.2*b;
	d=0.4*b;
	p=0.12*b;
	g=b+d+h+p;
	printf("b=%.2f \n",b);
	printf("d=%.2f \n",d);
	printf("h=%.2f \n",h);
	printf("p=%.2f \n",p);
	printf("g=%.2f \n",g);
}
