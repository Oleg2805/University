// �� - 5 
// � - 3
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
	cout << "���������� ������: " << endl;
	for (i = dek.begin(); i != dek.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << "\n������� N" << endl;
	int N, count(0);
	cin >> N;
	for (i = dek.begin(); i != dek.end(); ++i)
	{
		if (*i == N)
			count++;
	}
	cout << "���-�� ��������� ������ N: " << count << endl;
	sort(dek.begin(), dek.end());
	reverse(dek.begin(),dek.end());
	cout << "��������������� ������: " << endl;
	for (i = dek.begin(); i != dek.end(); ++i)
	{
		cout << *i << " ";
	}
}