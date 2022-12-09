#include <stdio.h>

main()
{
	printf("\n\nDZ_5.2\n\n");
	
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
	
	printf("input mas (%i:%i):\n",x,y);
	for (int x_=0; x_<x; x_++)
	{
		for (int y_=0; y_<y; y_++)
		{
			printf("input mas [%i:%i] = ",x_,y_);
			scanf("%i",&mas[x_][y_]);
		}
	}
}