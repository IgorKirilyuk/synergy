#include <stdio.h>

main()
{
	printf("\n\nDZ_4.3\n\n");
	
	int m2[100], n=0;
	
	printf("input qnt mas: ");
	while ((n==0)||(n>99))
	{
		scanf("%i", &n);
		if ((n<1)||(n>100)) printf("Error: n=(1:100)\n",n);
		printf("\n");
	}
	
	for (int i=0; i<n; i++)
	{
		scanf("%i",&m2[i]);
	}
	
	bool fl=true;
	while (fl)
	{
		fl=false;
		for (int i=0; i<n-1; i++)
		{
			if (m2[i]>m2[i+1])
			{
				int t=m2[i];
				m2[i]=m2[i+1];
				m2[i+1]=t;
				fl=true;
			}
		}
	}
	
	for (int i=0; i<n; i++)
	{
		printf("%4i",m2[i]);
	}
}