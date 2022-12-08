#include <stdio.h>

main()
{
	printf("DZ_4.4\n\n");
	
	int m1[100], n=0;
	
	printf("input qnt mas: ");
	while ((n==0)||(n>99))
	{
		scanf("%i", &n);
		if ((n<1)||(n>100)) printf("Error: n=(1:100)\n",n);
		printf("\n");
	}
	
	for (int i=0; i<n; i++)
	{
		scanf("%i",&m1[i]);
	}
	
	int min,max,sum=0;
	min=max=sum=m1[0];

	for (int i=1; i<n; i++)
	{
		sum=sum+m1[i];
		if (min>m1[i]) min=m1[i];
		if (max<m1[i]) max=m1[i];
	}
	
	printf("min=%i; max=%i; sum=%i; mid=%f\n",min,max,sum,(float)sum/(float)n);
}