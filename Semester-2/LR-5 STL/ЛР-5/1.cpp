// �� - 5 
// � - 3
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
	cout << "�������� ��������:\n1.  �������� �������\n2.  ������� �������\n3.  ������� ������� � ������� N\n4.  ������� ���������� �������\n5.  ������� ���������� ���������\n6.  �������� ������\n7.  �����" << endl;
	while (!end)
	{
		cin >> in;
		switch (in)
		{
			case 1: cout << "������� �������� ������������ ��������: "; cin >> t; a.push_back(t);  break;
			case 2: a.pop_back(); cout << "������ ��������� �������"<< endl; break;
			case 3: cout << "�������  ����� ������������� ��� ��������" << endl; cin >> t;  cout << a[t - 1] << endl; break;
			case 4: for (int i = 0; i < a.size(); i++)
			{
				cout << a[i] << " ";
			} cout << endl; break;
			case 5: cout << "���-�� ��������� � �������: " <<a.size() << endl; break;
			case 6: a.clear(); cout << "������ ������. " << endl; break;
			case 7: end = true; break;
			default: cout << "������ �����" << endl; break;
		}
	}
}