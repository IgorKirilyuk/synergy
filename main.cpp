#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	printf("\n\nDZ_5.3\n\n");
	
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
			mas[x_][y_]= -2 + rand() % 7 ;
			printf("mas[%i][%i]=%i\n",x_,y_,mas[x_][y_]);
		}
	}
}