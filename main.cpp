#include <stdio.h>
#include <string.h>

main()
{
	printf("\n\nDZ_6.3\n\n");
	
	printf("1)\n");
	char str1[100];	
	int x=0;
	printf("String (2ch-99ch): ");
	while ((x<2)||(x>99))
	{
		gets(str1);
		x=strlen(str1);
		if ((x<2)||(x>99)) printf("Error: str=(2ch - 99ch)\n");
		printf("\n");
	}
	printf("chr_2 = %c \n",str1[1]);
	
	printf("\n\n2)\n");
	char c=str1[0];
	printf("Las ch: %c\n",str1[strlen(str1)-1]);
	str1[0]=str1[x-1];
	str1[x-1]=c;
	printf("new str: ");
	puts(str1); 
	
	printf("\n\n2)\n");
	
	int del_;
	while (del_<1||del_>x)
	{
		printf("num chr del: ");
		scanf("%i",&del_);
		if ((del_<1)||(del_>x)) printf("Error: Out of range\n");
	}
	
	for (int i=del_-1;i<x;i++)
	{
		str1[i]=str1[i+1];
	}
	printf("new str: ");
	puts(str1); 
}