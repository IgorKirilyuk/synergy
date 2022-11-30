#include <stdio.h>

main()
{
	printf("DZ_4.2.1 \n\n");
	
	int m1[7];
	for (int i=0; i<7; i++)
	{
		scanf("%i",&m1[i]);
	}
	for (int i=0; i<7; i++)
	{
		printf("%2i",m1[i]);
	}

	printf("\n\nDZ_4.2.2\n\n");
	
	int m2[100], n=0;
	
	printf("input qnt mas: ");
	while ((n==0)||(n>99))
	{
		scanf("%i", &n);
		if ((n==0)||(n>100)) printf("Error: n=(1:100)\n",n);
		printf("\n");
	}
	
	
	for (int i=0; i<n; i++)
	{
		scanf("%i",&m2[i]);
	}
	for (int i=0; i<n; i++)
	{
		printf("%2i",m2[i]);
	}
}