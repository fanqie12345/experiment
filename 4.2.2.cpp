#include<iostream>
using namespace std;
int parseHex(const char* const hexstring)
{
	int a;
	int sum = 0;
	a = strlen(hexstring);
	int *list;
	list = new int[a];
	for (int i = 0; i < a; i++)
	{
		if (hexstring[i] >= 'A' && hexstring[i] <= 'F')
			list[i] = (static_cast<int>(hexstring[i]) - 55) * (pow(16, a - 1 - i));
		else
			list[i] = (hexstring[i] - 48) * pow(16, a - 1 - i);
		sum = sum + list[i];
	}
	return sum;
}
int main()
{
	char *s;
	int size = 999;
	s = new char[size];
	cout << "请输入一个十六进制的数：";
	cin.getline(s, size);
	cout << "该数转换为十进制为：" << parseHex(s) << endl;
	return 0;
}