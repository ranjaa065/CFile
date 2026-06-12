#include<stdio.h>
float main()
{
	float s,p,t,r;
	printf("enter the principle,time,rate:");
	scanf("%f,%f,%f",&p,&t,&r);
	s=(p*r*t)/100;
	printf("the simple interest= %f",s);
}