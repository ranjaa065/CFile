#include<stdio.h>
int main()
{
	int a;
	printf("enter value");
	scanf("%d",&a);
	if(a>0)
	{	
		printf("%d positive number",a);
	}	
	else if(a<0)
	{
		printf("%d negative number",a);
	}	
	else
	{
		printf("zero");
       }
}