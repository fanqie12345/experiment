#include<iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	double a , b, c;
	cout << "请输入三角形三边长" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		cout << "三角形的面积为：" << double_area(a, b, c) << endl;
	}
	else 
	{
		cout << "输入的三边构不成三角形" << endl;
	}
	return 0;
}