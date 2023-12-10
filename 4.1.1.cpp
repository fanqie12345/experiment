#include<iostream>
using namespace std;
int main()
{
	const int max = 10;
	int a[max];
	cout << "请输入十个数" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cin >> a[i];
	}
	cout<<a[0];
	for(int j=1;j<10;j++)
		for(int k=0;k<j;k++)
		{
			if (a[j] != a[k])
			{
				if (k == j - 1)
					cout << a[j];
				else continue;
			}
			else break;
		}
	return 0;

}