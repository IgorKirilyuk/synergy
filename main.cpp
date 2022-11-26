#include <stdio.h>
#include <math.h>
main()
{
	int qnt,min,max,sum=0,cur;
	printf("qnt number? ");
	scanf("%i",&qnt);
	
	if (qnt > 0)
	{
		for (int n=0; n < qnt; n++)
		{
			printf("number? ");
			scanf("%i",&cur);
			
			if (n==0)
			{
				min=cur;
				max=cur;
			}
			
			if (cur < min)
			{
				min = cur;
			}
			
			if (cur > max)
			{
				max = cur;
			}
			
			sum = sum + cur;
		}
		
		printf("min=%i \n",min);
		printf("max=%i \n",max);
		printf("sum=%i \n",sum);
		printf("mid=%f \n",float(sum)/float(qnt));
	}
}