#include <stdio.h>

//DZ_7.3

int sqr_ (int a_)
{
	for (int i=0; i<a_; i++)	
	{
		if (i*i==a_)
		{
			return i;
		}
	}
	return 0;
}


void sqr_ (int a_, int *z_ )
{	
	for (int i=0; i<a_; i++)	
	{
		if (i*i==a_)
		{
		  *z_=i;
		}	
	}
}


void sqr_ (int a_, int &y_ )
{	
	for (int i=0; i<a_; i++)	
	{
		if (i*i==a_)
		{
		  y_=i;
		}	
	}
}

main()
{
	int t;
	printf ("input int:");
	scanf ("%i",&t);
	printf ("\nsqr? %i",sqr_(t));
	
	int x=0;
	int *z;
	z=&x;
	sqr_(t,z);
	printf ("\nsqr? %i",*z);
	
	int y=0;
	sqr_(t, y);
	printf ("\nsqr? %i",y);
	
}