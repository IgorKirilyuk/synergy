#include <stdio.h>
#include <math.h>
main()
{
	int i = 1;
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
	return(0);
}