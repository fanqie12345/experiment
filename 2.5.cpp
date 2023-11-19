#include<iostream>
using namespace std;
int main()
{
	
	char c;
	int english = 0, num = 0, space = 0, other = 0;
	while((c=getchar())!='\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') { english++; }
		else if (c == ' ') { space++; }
		else if (c >= '0' && c <= '9') { num++; }
		else other++;
	}
	cout << "Ó¢ÎÄ×ÖÄ¸:" << english << "¿Õ¸ñ:" << space << "Êý×Ö×Ö·û:" << num << "ÆäËû×Ö·û" << other << endl;
	return 0;
}
