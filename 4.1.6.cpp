#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[])
{
	int size=99;
	int t;
	size = strlen(s);
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		if (s[i] >= 'a')
			counts[s[i] - 'a']++;
		else counts[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
			cout <<static_cast<char>(i+'a') <<"£º"<< counts[i] << endl;
	}
}
int main()
{
	int size = 99;
	int counts[26] = {};
	char* s;
	s = new char[size];
	cout << "ÇëÊäÈëÒ»¶Î×Ö·û´®£º" << endl;
	cin.getline(s, size);
	count(s,counts );
	return 0;
}