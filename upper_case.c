#include<stdio.h>
char main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	if
		(ch>=65 && ch<=90)
	printf("lowercase=%c", ch+32);
	else
		printf("uppercase=%c",ch-32);
}
