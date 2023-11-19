#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "请输入一个数：" << endl;
	cin >> x;
	if (x > 0 && x < 1)cout << 3 - 2*x<<endl;
	if (x >= 1 && x < 5)cout << 0.5/x+ 1 << endl;
	if (x >= 5 && x < 10)cout << x * x << endl;
	return 0;

}