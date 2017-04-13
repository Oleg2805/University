// ЛР - 5 
// В - 3
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>
#include<locale.h>
#include <string.h>
#include<deque>
#include<algorithm>
using namespace std;

void main()
{
	deque<int> dek;
	deque<int>::iterator i;
	setlocale(LC_ALL, "rus");
	ifstream f;
	int t;
	f.open("Text.txt", ios::in);
	while(!f.eof())
	{
		f >> t;
		dek.push_back(t);
		
	}
	cout << "Полученный список: " << endl;
	for (i = dek.begin(); i != dek.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << "\nВведите N" << endl;
	int N, count(0);
	cin >> N;
	for (i = dek.begin(); i != dek.end(); ++i)
	{
		if (*i == N)
			count++;
	}
	cout << "Кол-во элементов равных N: " << count << endl;
	sort(dek.begin(), dek.end());
	reverse(dek.begin(),dek.end());
	cout << "Отсортированный список: " << endl;
	for (i = dek.begin(); i != dek.end(); ++i)
	{
		cout << *i << " ";
	}
}