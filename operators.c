#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\naddition is:%d",c);
	c=a-b;
	printf("\nsubtraction is:%d",c);
	c=a*b;
	printf("\nmultiplication is:%d",c);
	c=a/b;
	printf("\ndivision is:%d",c);
	c=a%b;
	printf("\nmodulo division is:%d",c);
}
