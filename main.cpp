#include <stdio.h>
main()
{
	int log, pas;
	printf("log=");
	scanf("%i",&log);
	printf("pas=");
	scanf("%i",&pas);
	
	if(((log==123)&&(pas==321))||((log==456)&&(pas==654)))
	{
		if (log==123)
		{
			/*printf("User1: OK; log=%i pas=%i",log,pas);*/
			printf("User1: OK");
		}
		else
		{
			printf("User2: OK");
		}
	}
	else
	{
		printf("Error");
	}
}