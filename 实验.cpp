#include<stdio.h>
int main()
{
	double number;
	printf("������һ��С��1�Ĳ���ֻ��3λβ����ʵ��:\n");
	scanf("%lf", &number);   //��ȡ��ֵ
	if (number >= 1 || number == 0)
		printf("����ֵ����");  //�ж���ֵ�Ƿ�С��1����β��
	else if (number < 0)  //������ת��Ϊ����
		number = -number;
	int tmp = number * 1000;
	int x = number * 10000;
	if (tmp * 10 != x)    //�ж�β���Ƿ��Ϊ3λ
		printf("�������ʵ��������3λβ��");   
	int a, b, c;
	a = tmp / 100 % 10;
	b = tmp / 10 % 10;   //��ȡ����λ������
	c = tmp % 10;
	printf("0  %d  %d  %d\n", a, b, c); //������
	return 0;
}