#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int a, b;
	a = strlen(s1);
	b = strlen(s2);
	bool *s3;
	s3 = new bool[a];
	for (int m = 0; m < a; m++)
	{
		s3[m] = false;
	}
	int index,j,k;
		for (int i = 0; i < b - a + 1; i++) 
		{
			for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)      
				if (s1[j] == s2[k])
				{
					index = i;
					s3[j] = true;
				}
			int h = 0;
			for (int n = 0; n < a; n++)
			{
				if (s3[n] == false && i == b - a)
				{
					return -1; break;
				}
				if (s3[n])
					h++;
			}
			if (h == a)
			{
				return index;
			}
		}
	}


	

int main()
{
	
	int size = 999;
	char* s1;
	s1 = new char[size];
	char* s2;
	s2 = new char[size];
	cout << "�������һ���ַ���" << endl;
	cin.getline(s1, size);
	cout << "������ڶ����ַ���" << endl;
	cin.getline(s2, size);
	cout << indexOf(s1, s2) << endl;
	return 0;

}