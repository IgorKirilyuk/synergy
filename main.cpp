#include <stdio.h>
#include <math.h>
main()
{
	int i = 1;
	printf ("DZ3.5_1)\n");
	while (i < 10)
	{
		printf ("%i) Hello \n",i++);
	}
	
	printf ("\n");
	
	for (i=0; i<15; i++)
		printf ("i=%i \n",i);
	
	printf ("\n");
	
	for (i=1; i<15; i=i+2)
		printf ("i=%i \n",i);

	printf ("\n");
	printf ("DZ3.5_2)\n");

	int n, s;
	for (n=5; n<16; n++)
	s=s+(n);
	printf ("s=%i \n",s);
	/*
	{
	printf ("n=%i \n",n);
	printf ("s=%i \n",s=s+(n));
	}
	*/
	return(0);
}