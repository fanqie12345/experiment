#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "�����������ε����߳�:" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a - b < c)
	
{
		cout << "�����α߳�Ϊ��" << a + b + c << endl;
		if (a == b || a == c || b == c)
			cout << "���������ǵ���������" << endl;
		else cout << "�������β��ǵ���������" << endl;
	}
	else cout << "�����߹�����������" << endl;
	return 0;

}