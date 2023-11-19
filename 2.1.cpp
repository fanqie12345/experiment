#include<iostream>
using namespace std;
int main(void)
{
	    cout << "请输入一个字符：" << endl;
		char a;
		cin >> a;
		int x = a;
		if (a >= 65 && a <= 90)//如果a是大写字母 
			cout << x << endl;
		else//如果a是小写字母 
		{
			a = a - 32;
			cout << a;
		}

}