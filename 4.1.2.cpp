#include<iostream>
using namespace std;
void bubble(double list[10])
{
	double t;
	int size = 10;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <size-1;j++)
			if (list[j] > list[j + 1])
			{
				t = list[j + 1];
				list[j + 1] = list[j];
				list[j] = t;
				changed = true;
			}
	} while (changed == false);

}
int main()
{
	cout << "������ʮ������" << endl;
	double list[10];
	for (int i = 0; i < 10; i++)
		cin >> list[i];
	cout << "���������" << endl;
	bubble(list);
	for (int i = 0; i < 10; i++)
		cout << list[i];



}