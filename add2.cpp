#include<stdio.h>
main()
{
	int a, b, c;
	printf("enter your a and b: \n");
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d",&b);
	c=a+b;
	printf("%d+%d=%d", a, b, c);
	return 0;
}
