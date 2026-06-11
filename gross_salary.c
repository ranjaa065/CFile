#include<stdio.h>
int main()
{
float basic_salary,da,hr,g;
printf("enter the basic salary=");
scanf("%f",&basic_salary);
da=0.45*basic_salary;
hr=0.03*basic_salary;
g=basic_salary+hr+da;
printf("the gross total=%f",g);
return 0;
}