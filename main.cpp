#include <stdio.h>
#include <string.h>

//ДЗ 7.4
//Задание-1
void str_1 ()
{	
	char str[100];	
	int x=0;
	
	printf("String (1ch-99ch): ");
	while ((x<1)||(x>99))
	{
		gets(str);
		x=strlen(str);
		if ((x<1)||(x>99)) printf("Error: str=(1ch - 99ch)\n");
		printf("\n");
	}
	
	int sl_=strlen(str);
	char c_=str[0];
	str[0]=str[sl_-1];
	str[sl_-1]=c_;
	puts(str);
}

//Задание-2
void str_2()
{
	char str[100];	
	int x=0;
	
	//заполняем массив
	printf("String (1ch-99ch): ");
	while ((x<1)||(x>99))
	{
		gets(str);
		x=strlen(str);
		if ((x<1)||(x>99)) printf("Error: str=(1ch - 99ch)\n");
		printf("\n");
	}
	//определяем длину строки 
	int sl_=strlen(str), fs_=-1, ls_=-1, i_=0;
	
	//определяем индекс первого символа НЕ ' '
	while ((fs_==-1)&&(i_<sl_))
	{
		if (str[i_]!=' ')
		{

			fs_=i_;
		}
		i_++;
	}
	
	//определяем индекс последнего символа НЕ ' '
	i_=sl_-1;
	while ((ls_==-1)&&(i_>-1))
	{
		if (str[i_]!=' ')
		{

			ls_=i_;
		}
		i_--;
	}
	//проверка индекса
	//printf("\nls_=%i\n",ls_);

	//удаляем проблеы в конце строки
	str[ls_+1]=str[sl_];
	
	//удаляем пробелы в начале строки
	sl_=strlen(str);
	for (int i_=0; i_<sl_; i_++)
	{
		str[i_]=str[fs_+i_];
	}
	//вывод
	puts(str);	
}

main()
{
	str_1();
	str_2();	
}