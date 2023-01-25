#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;


//ЗАДАНИЕ №1

//объявление класса Персона
class Persone {
private:

protected:	
	char name_[30];
	int age_=0, weight_=0;
public:	
	//Ввод имени персоны
	void inp_name ()
	{
		int x_=0;
		printf("Name (1ch-29ch): ");
		while ((x_<1)||(x_>29))
		{
			gets(name_);
			x_=strlen(name_);
			if ((x_<1)||(x_>99)) printf("Error: Name=(1ch - 29ch)\n");
		}
	};	
	
	//Вывод имени
	void outp_name ()
	{
		printf("Name: ");
		puts(name_);
		printf("\n");
	};
	
	//ввод возраста персоны
	void inp_age ()
	{
		int x_= -1;
		printf("Age: ");
		while ((x_<0)||(x_>120))
		{
			scanf("%i",&x_);
			if ((x_<1)||(x_>120))
			{
				printf("Error: Age = (0 - 120)\n");
			}
			else
			{
				age_=x_;
			}
			printf("\n");
		}
	};
	
	//ввод веса персоны
	void inp_weight ()
	{
		int x_= 0;
		printf("Weight: ");
		while ((x_<1)||(x_>200))
		{
			scanf("%i",&x_);
			if ((x_<1)||(x_>200))
			{
				printf("Error: weight = (1 - 200)\n");
			}
			else
			{
				weight_=x_;
			}
			printf("\n");
		}
	};
	
	//вывод возраста персоны
	void outp_age ()
	{
		printf("Age: %i\n",age_);
	};
	
	//вывод веса персоны
	void outp_weight ()
	{
		printf("Weight: %i\n",weight_);
	};
};


//Объявление дочернего классса Студент.
class Stud : public Persone {

	public:
	int stud_time_, age_after_;
	
	Stud (int stud_time) 
	{
		stud_time_=stud_time;		
	};

//Изменение времени учебы.	
	void inp_stud_time ()
	{
	int x_= 0;
	printf("stud_time: ");
		while ((x_<1)||(x_>6))
		{
			scanf("%i",&x_);
			if ((x_<1)||(x_>6))
			{
				printf("Error: stud time = (1 - 6)\n");
			}
			else
			{
				stud_time_=x_;
			}
			printf("\n");
		}
	age_after_= age_+stud_time_;
	printf("age after: %i", age_after_);
	};
		
	//модификация для студента - ввод возраста персоны
	void inp_age ()
	{
		int x_= -1;
		printf("Age: ");
		while ((x_<0)||(x_>120))
		{
			scanf("%i",&x_);
			if ((x_<1)||(x_>120))
			{
				printf("Error: Age = (1 - 120)\n");
			}
			else
			{
				age_=x_;
				age_after_=age_+stud_time_;
			}
			printf("\n");
		}
	};


};


//ЗАДАНИЕ №2
//jопределение класса персоны
class Employee : public Persone 
{

public:
	int pers_level_=99, pers_discont=0;
	std::string emp_name_;
	
	//определение уровня достпа и перс скидки в конструкторе
	Employee (int lvl, std::string name, int age)
	{
		
		emp_name_=name;
		age_=age;
		
		//уровень доступа
		if ((lvl>0)&&(lvl<4))
		{
			pers_level_=lvl;
		}
		else 
		{
			pers_level_=0;	
		};
		
		
		//Скидка
		switch(lvl)
		{
		case 1:
			{
				pers_discont=5;
			}
			break;			
		case 2:
			{
				pers_discont=10;
			}
			break;	
		case 3:
			{
				pers_discont=15;
			}
			break;				
		default:
			{
				printf("Error; ");
			}
		}
	}
	
	void outp_name ()
	{
		printf("Name: %s", emp_name_);
		printf("\n");
	};
};

int main ()
{
	
	Stud stud_(6);
//вводд данных по студенту
	stud_.inp_name();
	stud_.inp_age();
	stud_.inp_weight();
//Вывод данных по студенту
	stud_.outp_name();
	stud_.outp_age();
	stud_.outp_weight();
	printf("age after stud_time: %i\n", stud_.age_after_);
	printf("\n");	
	
//Ввод данных по сотруднику
	Employee empl_(2, "Bob", 33);
//Вывод по сотруднику
	std::cout << empl_.emp_name_ << "\n";
	empl_.outp_age();
	printf("pers level: %i\n", empl_.pers_level_);
	printf("pers discont: %i\n", empl_.pers_discont);
	
	return 1;
}