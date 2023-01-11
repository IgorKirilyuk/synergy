#include <stdio.h>
#include <string.h>

main()
{
	//ДЗ 6.4
	//Задание-1
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
	
	int len_=strlen(str1);
	for (int i=0;i<len_;i++)
	{
		str1[i]=str1[i+1];
	}
	puts(str1);
	
	//Задание-2
	len_=strlen(str1);
	char str2[len_];	
	for (int i=len_;i>=0;i--)
	{
		//printf("\n%c",str1[i]);
		str2[len_-i]=str1[i-1];
	}
	puts(str2);
}