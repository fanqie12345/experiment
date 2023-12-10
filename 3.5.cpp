#include<iostream>
using namespace std;
int answer(int final)
{
    return (final + 1) * 2;
}
int main()
{
	int sum=1;
	for (int i = 1; i < 10; i++)
		sum = answer(sum);
	cout << sum << endl;
	return 0;
}