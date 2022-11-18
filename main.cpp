#include <stdio.h>

main()
{
	int i,t=0;

	printf ("1)\n");
	for (i=1; i<=10; i++)
	printf ("%i*5=%i \n",i,i*5);
		
	printf ("2)\n");
	while (t!=7)
	{
		scanf("%i",&t);	
		printf ("t=%i \n",t);
		if (t>7)
		{
			printf ("%i > 7 \n",t);
		}
		if (t<7)
		{
			printf ("%i < 7 \n",t);
		}
		if (t>10)
		{
			printf ("%i > 10 \n",t);
		}
		if (t<10)
		{
			printf ("%i < 10 \n",t);
		}
		if (t%2==0)
		{
			printf ("%i kratno 2 \n",t);
		}
		else printf ("%i ne kratno 2 \n",t);
		if (t%3==0)
		{
			printf ("%i kratno 3 \n",t);
		}
		else printf ("%i ne kratno 3 \n",t);
	}
}