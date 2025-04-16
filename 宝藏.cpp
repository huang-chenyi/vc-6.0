#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE* file = fopen("C:/Users/43502/Desktop/treasure.txt", "w"); // 打开文件用于写入
    if (file == NULL) 
    {
        perror("Error opening file");
        return 1;
    }
    fprintf(file, "白日做梦"); // 写入内容到文件
    fclose(file); // 关闭文件

    system("start C:/Users/43502/Desktop/treasure.txt");
    return 0;
}