#include<iostream>
#include<string>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int t;
	for (int i=0;i<size1;i++)
		list3[i] = list1[i];
	for (int i = 0; i <size2; i++)
		list3[size1+i] = list2[i];
	for(int a=0;a<(size1+size2)-1;a++)
		for(int b=0;b<(size1+size2)-1;b++)
			if (list3[b] > list3[b + 1])
			{
				t = list3[b];
				list3[b] = list3[b + 1];
				list3[b + 1] = t;
			}
	for (int c = 0; c < (size1 + size2); c++)
		cout << list3[c]<<" ";
}
int main()
{
	int size1, size2,size3;
	cout << "请输入第一个数组的元素数：" << endl;
	cin >> size1;
	int* list1;
	list1 = new int[size1];
	cout << "请输入第一个排列好的数组：" << endl;
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "请输入第二个数组的元素数：" << endl;
	cin >> size2;
	int* list2;
	list2 = new int[size2];
	cout << "请输入第二个排列好的数组：" << endl;
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	size3 = size1 + size2;
	int* list3;
	list3 = new int[size3];
	cout << "新数组为：";
	merge(list1,size1,list2,size2,list3);
	cout << endl;
	return 0;

}
