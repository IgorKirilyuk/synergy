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
	virtual void outp_name ()
	{
		printf("Name: ");
		puts(name_);
		printf("\n");
	};
	
	//ввод возраста персоны
	virtual void inp_age ()
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
	override
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
//определение дочернего класса - сотрудник
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
	override
	{
		std::cout << emp_name_ << "\n";
	};
};

int main ()
{


	Stud stud_(6);
//вводд данных по студенту
	stud_.inp_name();
	stud_.inp_age();
	stud_.inp_weight();
	printf("\n");
//Вывод данных по студенту
	stud_.outp_name();
	stud_.outp_age();
	stud_.outp_weight();
	printf("age after stud_time: %i\n", stud_.age_after_);
	printf("\n");	

	
//Ввод данных по сотруднику
	Employee empl_(2, "Bob", 33);
//Вывод по сотруднику
	//std::cout << empl_.emp_name_ << "\n";
	empl_.outp_name();
	empl_.outp_age();
	printf("pers level: %i\n", empl_.pers_level_);
	printf("pers discont: %i\n", empl_.pers_discont);
	
	return 1;
}

//ЗАДАНИЕ №3
//класс1 (блок):
/*
class type_bloc {
	private:
	
	protected:	
		std::string name_; //Наименование типа
		int hp_ = 1; //hp блока, по умолчанию 1
		int texture_=0; //указывает на текстуру применяемую к данному типу блока
		
		int resIn [5][2] // Ресурсы необходимые для создания одного блока данного типа - состав масива (идентификатор ресурса, количество необходимого ресурса)
			{ 
			    {1, 1},     // первый ресурс по умолчанию
			    {0, 0},     // второй ресурс по умолчанию
			    {0, 0},     // третий ресурс по умолчанию
			    {0, 0},     // четвертый ресурс по умолчанию
			    {0, 0},     // пятый ресурс по умолчанию
			};
		
		int resOut [5][2] // Ресурсы получаемые при разрушении одного блока данного типа - состав масива (идентификатор ресурса, количество ресурса)
			{ 
			    {1, 1},     // первый ресурс по умолчанию
			    {0, 0},     // второй ресурс по умолчанию
			    {0, 0},     // третий ресурс по умолчанию
			    {0, 0},     // четвертый ресурс по умолчанию
			    {0, 0},     // пятый ресурс по умолчанию
			};
		
	public:	
		type_bloc () {}; //Конструктор при создании очередного типа задает ХП, наименование, текстуру, добавляет новый тип в список рецептов
		~type_bloc () {}; //Деструктор при удалении типа, исключает данный тип из списка рецептов
		res_mod () {}; //изменяет состав необходимых и получаемых ресурсов
}

class bloc {
	private:
	
	protected:	
		type_bloc *type_; //ссылка на тип блока - обеспечение характеристик блока
		int x_ = 0; //координата расположения блока
		int y_ = 0; //координата расположения блока
		int curHP_ = 1; //текущее hp блока, по умолчанию 1
		
	public:	
		bloc () {}; //Конструктор при создании очередного блока задается его тип, присваивается текущее ХП, координаты
		~bloc () {}; //При разрушении блока, он удаляется из текущих координат, возвращает игроку ресурсы
		bloc_mod () {}; //Изменение характеристик блока (ХП)
}

class hero { // Класс персонажа
	private:
	
	protected:
		int texture_=0; //указывает на текстуру персонажа по умолчанию	
		std::string name="Bob"; //имя персонажа по умолчанию
		int curY_ = 0; //координата расположения 
		int curX_ = 0; //координата расположения 
		int HP_ = 10; //текущее hp 
		int speed_=3; //Скорость
		
		
	public:	
		hero () {}; //Конструктор при создании персонажа задается его имя, скин, координаты
		~hero () {}; //При разрушении персонажа, он удаляется из текущих координат
		hero_mod() {}; //Изменение характеристик персонажа: ХП, скорости, скина, имени
		attack() {}; //обработка атаки
		move() {}; //обработка перемещения
}

class arm_type { // Класс оружия
	private:
	
	protected:
		int texture_=0; //указывает на текстуру персонажа по умолчанию	
		std::string name=""; //имя 
		int HP_ = 10; //текущее hp 
		int speed_=3; //Скорость
		
		int resIn [5][2] // Ресурсы необходимые для создания данного оружия - состав масива (идентификатор ресурса, количество необходимого ресурса)
			{ 
			    {1, 1},     // первый ресурс по умолчанию
			    {0, 0},     // второй ресурс по умолчанию
			    {0, 0},     // третий ресурс по умолчанию
			    {0, 0},     // четвертый ресурс по умолчанию
			    {0, 0},     // пятый ресурс по умолчанию
			};
		
	public:	
		arm_type () {}; //Конструктор при создании персонажа задается его имя, скин, ХП, добавляет оружие в список рецептов
		~arm_type () {}; //При разрушении оружия оно удаляется из списка рецептов
		arm_type_mod() {}; //Изменение характеристик оружия: ХП, список необходимых ресурсов
}
*/