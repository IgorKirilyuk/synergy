#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	printf("\n\nDZ_5.6\n\n");
	
	int mas[4][3], x=4, y=3;
	
	srand(time(NULL));
	for (int x_=0; x_<x; x_++)
	{
		for (int y_=0; y_<y; y_++)
		{
			mas[x_][y_]= rand() % 10 ;
		}
	}
	printf("mas source\n");
	for (int ty_=0; ty_<y; ty_++)
	{
		for (int tx_=0; tx_<x; tx_++)
		{
			printf("[%i]",mas[tx_][ty_]);
		}
		printf("\n");
	}
	
	for (int y_=0;y_<y;y_++)
	{
		bool fl=true;
		while (fl)
		{
			fl=false;
			for (int x_=0; x_<x-1; x_++)
			{
				if (mas[x_][y_]>mas[x_+1][y_])
				{
					int t=mas[x_][y_];
					mas[x_][y_]=mas[x_+1][y_];
					mas[x_+1][y_]=t;
					fl=true;
				}
			}
		}
	}
	printf("\n\n");
	printf("mas sort\n");
	for (int ty_=0; ty_<y; ty_++)
	{
		for (int tx_=0; tx_<x; tx_++)
		{
			printf("[%i]",mas[tx_][ty_]);
		}
		printf("\n");
	}

	for (int y_=0; y_<y;y_++)
	{
		int t_=mas[0][y_];
		mas[0][y_]=mas[x-1][y_];
		mas[x-1][y_]=t_;
	}
	printf("\n\n");
	printf("mas fin\n");
	for (int ty_=0; ty_<y; ty_++)
	{
		for (int tx_=0; tx_<x; tx_++)
		{
			printf("[%i]",mas[tx_][ty_]);
		}
		printf("\n");
	}	
}