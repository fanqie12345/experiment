#include<iostream>
using namespace std;
int main()
{
	double x, y;
	char s;
	cin >> x >> s >> y;
	if (s == '+')cout << x<<"+" << y <<"=" << x + y << endl;
	if (s == '-')cout << x << "-" << y << "-" << x - y << endl;
	if (s == '*')cout << x << "*" << y << "*" << x * y << endl;
	if (s == '/')
		if (y == 0)cout << "´íÎó" << endl;
		else cout << x << "/" << y << "/" << x / y << endl;
	if (s == '%')
		if (y == 0)cout << "´íÎó" << endl;
	else cout << x << "%" << y << "%" << int(x) % int(y) << endl;
	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')cout << "²»ÔÚ¼ÆËã·¶Î§ÄÚ" << endl;
	return 0;



}