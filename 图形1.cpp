#include<iostream>
using namespace std;

int main(void) {
    int line = 1;
    for (int i = 1; i <= 11; i++) { // 外层循环控制行数
        for (int space = 40 - 4 * (i - 1); space >= 1; space--) { // 控制空格数量
            cout << ' ';
        }
        for (int num = 1; num <= line; num = num + 2) { // 打印递增序列
            if (num >= 10)
                cout << num << ' ';
            else
                cout << num << '   ';
        }
        for (int num2 = line - 2; num2 >= 1; num2 = num2 - 2) { // 打印递减序列
            if (num2 >= 10)
                cout << num2 << ' ';
            else
                cout << num2 << '   ';
        }
        line = line + 2; // 更新下一行的数字数量
        cout << '\n'; // 换行
    }
    return 0;
}