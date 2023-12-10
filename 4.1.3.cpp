#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	bool list[size];
	for (int i = 0; i < 100; i++)
	{
		list[i] = false;
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = i; j < 100; j += i + 1)
		{
			if (list[j])
			{
				list[j] = false;
			}
			else list[j] = true;
		}
	}
	for(int i=0;i<100;i++)
		if (list[i])
		{
			cout << "L" << i+1 << " ";
		}
	cout << endl;
	return 0;
}