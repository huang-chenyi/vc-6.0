#include<iostream>
using namespace std;
int main(void)
{
	int number;
	cout << "请输入一个整数:";
	cin >> number;
	int temp = number * 100;
	if (temp < 10000)
		cout << "你太小了:)" << endl;
	else
		cout << "这么说你挺勇的嘛:)" << endl;
	return 0;
}