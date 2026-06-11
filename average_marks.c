#include<stdio.h>
int main()
{
float p,c1,m,c2,e,average;
printf("enter marks in physics:");
scanf("%f",&p);
printf("enter marks in chemistry:");
scanf("%f",&c1);
printf("enter marks in maths:");
scanf("%f",&m);
printf("enter marks in computer:");
scanf("%f",&c2);
printf("enter marks in english:");
scanf("%f",&e);
average=(p+c1+m+c2+e)/5;
printf("average of result=%f",average);
return 0;
}