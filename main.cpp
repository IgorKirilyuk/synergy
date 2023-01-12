#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//DZ_7.2
void push_m (int a_[], int b_)
{
	srand(time(NULL));
	printf("\n");
	for (int x_=0; x_<b_; x_++)
	{
		a_[x_]= rand() % 10 ;
		printf("\n[%i]=%i",x_,a_[x_]);
	}
}

main()
{
	int mas3[3];
	push_m(mas3,3);
	int mas4[4];
	push_m(mas4,4);
}