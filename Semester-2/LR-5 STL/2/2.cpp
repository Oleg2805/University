// ЛР - 5 
// В - 3
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>
#include<locale.h>
#include <string.h>
#include<Windows.h>
#include<string>
#include<map>
using namespace std;

void main()
{
	char fac[20], surname[20];
	multimap<string, string> m ;
	multimap<string, string> :: const_iterator i;
	setlocale(LC_ALL, "rus");
	ifstream f;
	fstream o;
	int size;
	f.open("source.txt", ios::in);
	o.open("result.txt", ios::out);
	f >> size;
	for (int i = 0; i < size; i++)
	{
		f >> fac;
		f >> surname;
		string fa=string(fac), su=string(surname);
		m.insert(pair<string, string>(fac,surname));
	}
	cout << "Полученный список: " << endl;
	for (i = m.begin(); i != m.end(); ++i)
	{
		printf("%s ", i->first.c_str());
		printf("%s\n", i->second.c_str());
	}
	cout << "Введите искомый факультет: ";
	string search;
	SetConsoleCP(1251);
	getline(cin, search);
	SetConsoleCP(866);
	for (i = m.begin(); i != m.end(); ++i)
	{
		if (!i->first.compare(search))
		{
		printf("%s ", i->first.c_str());
		printf("%s\n", i->second.c_str());
		}	
	}
	cout << endl;
	cout << "Введите фамилию: ";
	string stud;
	SetConsoleCP(1251);
	getline(cin, stud);
	SetConsoleCP(866);
	for (i = m.begin(); i != m.end(); ++i)
	{
		if (!i->second.compare(stud))
		{
			m.erase(i);
		}
	}
	cout << "Полученный список: " << endl;
	for (i = m.begin(); i != m.end(); ++i)
	{
		printf("%s ", i->first.c_str());
		printf("%s\n", i->second.c_str());
		//o >> i->first.c_str() >> " " >> i->second.c_str() >> endl;
	}

}