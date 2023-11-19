#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int F;
	cout << "请输入华氏温度：" << endl;
	cin >> F;
	float t = (F - 32) * 5 / 9;
	cout << "摄氏温度为：" <<fixed<<setprecision(2)<<t<<endl;
	return 0;
}