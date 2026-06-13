#include<stdio.h>
int main()
{
	int physics,maths,bio,avg;
	 printf("enter the physics,maths and bio= ");
    scanf("%d%d%d",&physics,&maths,&bio);
	avg=(physics+maths+bio)/3;
	printf("the avg marks is %d",avg);
	if (avg>=90)
	{
		printf("o grade");
	}else if (avg>=80 && avg<=90){
		printf("e grade");
	}else if (avg>=70 && avg <=80){
		printf("a grade");
	}else if (avg>=60 && avg<=70){
		printf("b grade");
	}else if (avg>=50 && avg<=60){
		printf("c grade");
	}else if (avg>=40 && avg<=50){
		printf("d grade");
	}else {
		printf("f grade");
	}
}
