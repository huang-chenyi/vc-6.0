#include<iostream>
using namespace std;

int main(void) {
    int line = 1;
    for (int i = 1; i <= 11; i++) { // ���ѭ����������
        for (int space = 40 - 4 * (i - 1); space >= 1; space--) { // ���ƿո�����
            cout << ' ';
        }
        for (int num = 1; num <= line; num = num + 2) { // ��ӡ��������
            if (num >= 10)
                cout << num << ' ';
            else
                cout << num << '   ';
        }
        for (int num2 = line - 2; num2 >= 1; num2 = num2 - 2) { // ��ӡ�ݼ�����
            if (num2 >= 10)
                cout << num2 << ' ';
            else
                cout << num2 << '   ';
        }
        line = line + 2; // ������һ�е���������
        cout << '\n'; // ����
    }
    return 0;
}