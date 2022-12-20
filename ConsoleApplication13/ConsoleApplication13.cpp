#include <stdio.h>
#include <iostream>
#include <Windows.h>
using namespace std;

struct books
{
    char name[100];
    char avtor[100];
    char vudovnavstvo[100];
    char thant[100];
}; 
struct cars
{
	char сolour[100];
	char model[100];
	char nomer[100];
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

   /* struct books bookes[] = { "451 ","Брэдбери","Славик-продакшен","фантастика","1984","Оруэлл","Славик-продакшен","преключения","Три-товарища","Эрих","Славик-продакшен","документальный" };
    int a = 100;
	int n = sizeof(bookes) / sizeof(bookes[0]);
	while (a != 0) {
		cout << "[1] Редагувати книгу" << endl;
		cout << "[2] Друк усіх книг" << endl;
		cout << "[3] Пошук книг за автором" << endl;
		cout << "[4] Пошук книги за назвою" << endl;
		cout << "[5] Сортування масиву за назвою книг" << endl;
		cout << "[6] Сортування масиву за автором" << endl;
		cout << "[7] Сортування масиву за видавництвом" << endl;
		cout << "[10] Закончить" << endl;
		cin >> a;
		switch (a)
		{
		case 1: {
			cout << "Выберите номер книги";
			for (int i = 0; i < n; i++)
			{
				cout << i + 1 << ' ';
			}
			cout << endl;
			int s;
			cin >> s;
		
			cout << "Введите название книги";
			books tmp;
			
			cin >> tmp.name;

			cout << "Введите автора книги";
			
			cin >> tmp.avtor;

			cout << "Введите производитель книги";
		
			cin >> tmp.vudovnavstvo;

			cout << "Введите жанр книги";
			
			cin >> tmp.thant;
			bookes[s + 1]= tmp;
			
			break;
		}

		case 2: {
			for (int i = 0; i < n; i++)
			{
				
					cout <<bookes[i].name << ' '<< bookes[i].avtor << ' '<< bookes[i].vudovnavstvo<< ' '<< bookes[i].thant;
				
				cout << '\n';
			}
			break;
		}
		case 3: {
			string avtorPoick;
			int count = 0;
			cout << "Введите автора"<<endl;
			cin >>avtorPoick;
			for (int i = 0; i < n; i++)
			{
				if (bookes[i].avtor == avtorPoick)
				{
					cout << bookes[i].name << ' ' << bookes[i].avtor << ' ' << bookes[i].vudovnavstvo << ' ' << bookes[i].thant;
					cout << '\n';
					count++;
				}

			}
			if (count == 0)
				cout << "Не найдено книг за этим автором" << endl;
			break;
		}
		case 4: {
			string name;
			int count = 0;
			cout << "Введите название" << endl;
			cin >> name;
			for (int i = 0; i < n; i++)
			{
				if (bookes[i].name == name)
				{
					cout << bookes[i].name << ' ' << bookes[i].avtor << ' ' << bookes[i].vudovnavstvo << ' ' << bookes[i].thant;
					cout << '\n';
					count++;
				}

			}
			if (count == 0)
				cout << "Не найдено книг за этим автором" << endl;
			break;
		}
		case 5: {

			break;
		}
		case 6: {

			break;
		}
		case 7: {

			break;
		}
		case 10: {
			cout << "Выход" << endl;
			break;
		}
		default:
			cout << "Введите верный вариант" << endl;
			break;
		}

	}*/

   struct cars carS[] = { "Красный","Кроссовер","АЕ2340КО","Зеленый","Хэтчбек","КЕ3463ФС","Красный","Купе","АЕ2979ДО" };
   int a = 100;
   int n = sizeof(carS) / sizeof(carS[0]);
   while (a != 0) {
	   cout << "[1] Редагувати машину" << endl;
	   cout << "[2] Друк усіх машин" << endl;
	   cout << "[3] Пошук машини за номером" << endl;
	   cout << "[10] Закончить" << endl;
	   cin >> a;
	   switch (a)
	   {
	   case 1: {
		   cout << "Выберите номер id машины";
		   for (int i = 0; i < n; i++)
		   {
			   cout << i + 1 << ' ';
		   }
		   cout << endl;
		   int s;
		   cin >> s;

		   cout << "Введите цвет машины";
		   cars tmp;

		   cin >> tmp.сolour;

		   cout << "Введите модель";

		   cin >> tmp.model;

		   cout << "Введите номер";
		   cin >> tmp.nomer;
		   carS[s + 1] = tmp;

		   break;
	   }

	   case 2: {
		   for (int i = 0; i < n; i++)
		   {

			   cout << carS[i].сolour << ' ' << carS[i].model << ' ' << carS[i].nomer;

			   cout << '\n';
		   }
		   break;
	   }
	   case 3: {
		   string avtorPoick;
		   int count = 0;
		   cout << "Введите автора" << endl;
		   cin >> avtorPoick;
		   for (int i = 0; i < n; i++)
		   {
			   
			
			   

		   }
		   if (count == 0)
			   cout << "Не найдено книг за этим автором" << endl;
		   break;
	   }
	   
	   case 10: {
		   cout << "Выход" << endl;
		   break;
	   }
	   default:
		   cout << "Введите верный вариант" << endl;
		   break;
	   }
}