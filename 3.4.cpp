#include<iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	double a , b, c;
	cout << "���������������߳�" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		cout << "�����ε����Ϊ��" << double_area(a, b, c) << endl;
	}
	else 
	{
		cout << "��������߹�����������" << endl;
	}
	return 0;
}