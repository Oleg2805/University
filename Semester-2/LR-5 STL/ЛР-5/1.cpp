// ЛР - 5 
// В - 3
#include<iostream>
#include<locale.h>
#include<vector>
using namespace std;

void main()
{
	vector<int> a;
	setlocale(LC_ALL, "rus");
	bool end = false;
	int in, t;
	cout << "Выберите действие:\n1.  Добавить элемент\n2.  Удалить элемент\n3.  Вывести элемент с номером N\n4.  Вывести содержимое вектора\n5.  Вывести количество элементов\n6.  Очистить вектор\n7.  Выход" << endl;
	while (!end)
	{
		cin >> in;
		switch (in)
		{
			case 1: cout << "Введите значение вставляемого элемента: "; cin >> t; a.push_back(t);  break;
			case 2: a.pop_back(); cout << "удален последний элемент"<< endl; break;
			case 3: cout << "Введите  номер интерисующего вас элемента" << endl; cin >> t;  cout << a[t - 1] << endl; break;
			case 4: for (int i = 0; i < a.size(); i++)
			{
				cout << a[i] << " ";
			} cout << endl; break;
			case 5: cout << "Кол-во элементов в векторе: " <<a.size() << endl; break;
			case 6: a.clear(); cout << "Вектор очищен. " << endl; break;
			case 7: end = true; break;
			default: cout << "ошибка ввода" << endl; break;
		}
	}
}