#include<iostream>
using namespace std;
int main(void)
{
	int number;
	cout << "������һ������:";
	cin >> number;
	int temp = number * 100;
	if (temp < 10000)
		cout << "��̫С��:)" << endl;
	else
		cout << "��ô˵��ͦ�µ���:)" << endl;
	return 0;
}