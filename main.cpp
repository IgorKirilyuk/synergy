#include <stdio.h>
#include <math.h>
main()
{
	int y;
	printf("Year: ");
	scanf("%i",&y);
	
	if (y<1900)
	{
		printf("Error");
		exit(0);
	}
	
	int m;
	printf("Month: ");
	scanf("%i",&m);
	
	if (m<1||m>12)
	{
		printf("Error");
		exit(0);
	}
	
	int d;
	printf("Day: ");
	scanf("%i",&d);
	
	if (d<1||d>31)
	{
		printf("Error");
		exit(0);
	}

	
	int yv = y%4;
	if (yv==0)
	{
		printf("%i leap year; ",y);
	}
	else
	{
		printf("%i not leap year; ",y);
	}
	
	
	int ye = (y-1888)%12;
	switch(ye)
	{
		case 0:
			{
				printf("rat; ");
			}
			break;
		case 1:
			{
				printf("bull; ");
			}
			break;
		case 2:
			{
				printf("tiger; ");
			}
			break;
		case 3:
			{
				printf("rabbit; ");
			}
			break;
		case 4:
			{
				printf("dragon; ");
			}
			break;
		case 5:
			{
				printf("snake; ");
			}
			break;
		case 6:
			{
				printf("horse; ");
			}
			break;
		case 7:
			{
				printf("goat; ");
			}
			break;
		case 8:
			{
				printf("monkey; ");
			}
			break;
		case 9:
			{
				printf("rooster; ");
			}
			break;
		case 10:
			{
				printf("dog; ");
			}
			break;
		case 11:
			{
				printf("dig; ");
			}
			break;
		default:
			{
				printf("Error; ");
			}
	}
	
	
	
	
	if ((m==12&&d>=23)||(m==1&&d<=20))
	{
		printf("Goat");
	}
	if ((m==1&&d>=21)||(m==2&&d<=19))
	{
		printf("Water Bearer");
	}
	if ((m==2&&d>=20)||(m==3&&d<=20))
	{
		printf("Fishes");
	}
	if ((m==3&&d>=21)||(m==4&&d<=20))
	{
		printf("Ram");
	}
	if ((m==4&&d>=21)||(m==5&&d<=21))
	{
		printf("Bull");
	}
	if ((m==5&&d>=22)||(m==6&&d<=21))
	{
		printf("Twins");
	}
	if ((m==6&&d>=22)||(m==7&&d<=22))
	{
		printf("Crab");
	}
	if ((m==7&&d>=23)||(m==8&&d<=21))
	{
		printf("Lion");
	}
	if ((m==8&&d>=22)||(m==9&&d<=23))
	{
		printf("Virgin");
	}
		if ((m==9&&d>=24)||(m==10&&d<=23))
	{
		printf("Balance");
	}
		if ((m==10&&d>=24)||(m==11&&d<=22))
	{
		printf("Scorpion");
	}
		if ((m==11&&d>=23)||(m==12&&d<=22))
	{
		printf("Archer");
	}

}