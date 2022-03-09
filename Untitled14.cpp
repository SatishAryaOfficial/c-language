#include<stdio.h>
#include<stdio.h>
int main()
{
	int i,j;
	float salary,bonus;
	char gender;
	printf("enter m for male and f forfemale \n");
	scanf("%c",&gender);
	printf("enter your salary \n");
	scanf("%f",&salary);
	if(gender=='m'|| gender=='M')
	{
		if(salary>10000)
		bonus=(float)(salary*0.05);
		else
		bonus=(float)(salary*0.07);
		}
		if(gender=='f'|| gender=='F')
		{
			if(salary>10000)
			bonus=(float)(salary*0.1);
			else
			bonus=(float)(salary*0.12);
			
			}
			salary+=bonus;
			printf("Bonus=%.2f\nSalary=%.2f \n",bonus,salary);
			
		
	}

