#include<stdio.h>
main()
{
	int a,b;
	printf("A=");
	scanf("%i", &a);
	printf("B=");
	scanf("%i", &b);
	if (a>b)
	{
		printf("Bolshe");
	}
	else
	{
		if (a==b)
		{
			printf("Ravnbl");
		}
		else
		{
			printf("Menshe");
		}
	}
}
