#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形的三边长:" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a - b < c)
	
{
		cout << "三角形边长为：" << a + b + c << endl;
		if (a == b || a == c || b == c)
			cout << "该三角形是等腰三角形" << endl;
		else cout << "该三角形不是等腰三角形" << endl;
	}
	else cout << "这三边构不成三角形" << endl;
	return 0;

}