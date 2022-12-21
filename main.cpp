#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	printf("\n\nDZ_5.5\n\n");
	
	int mas[10][10], x=0, y=0;
	
	printf("input qnt X mas: X=(1:10) = ");
	while ((x<1)||(x>10))
	{
		scanf("%i", &x);
		if ((x<1)||(x>10)) printf("Error: X=(1:10)\n");
		printf("\n");
	}

	printf("input qnt Y mas: Y=(1:5) = ");
	while ((y<1)||(y>5))
	{
		scanf("%i", &y);
		if ((y<1)||(y>5)) printf("Error: X=(1:5)\n");
		printf("\n");
	}
	
	srand(time(NULL));
	for (int x_=0; x_<x; x_++)
	{
		for (int y_=0; y_<y; y_++)
		{
			mas[x_][y_]= rand() % 10 ;
		}
	}
	
	printf("mas old\n");
	for (int ty_=0; ty_<y; ty_++)
	{
		for (int tx_=0; tx_<x; tx_++)
		{
			printf("[%i]",mas[tx_][ty_]);
		}
		printf("\n");
	}
	
	int rx_, rt_=0;
	if (x<y) 
		{
			rx_=x;
		}
		else
		{
			rx_=y;
		}
	
	for (int y_=0; y_<rx_; y_++)
	{
		for (int x_=0; x_<y_; x_++)
		{
			rt_=mas[x_][y_];
			mas[x_][y_]=mas[y_][x_];
			mas[y_][x_]=rt_;	
		}
	}
	
	printf("mas new\n");
	for (int ty_=0; ty_<y; ty_++)
	{
		for (int tx_=0; tx_<x; tx_++)
		{
			printf("[%i]",mas[tx_][ty_]);
		}
		printf("\n");
	}
}