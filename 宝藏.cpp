#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE* file = fopen("C:/Users/43502/Desktop/treasure.txt", "w"); // ���ļ�����д��
    if (file == NULL) 
    {
        perror("Error opening file");
        return 1;
    }
    fprintf(file, "��������"); // д�����ݵ��ļ�
    fclose(file); // �ر��ļ�

    system("start C:/Users/43502/Desktop/treasure.txt");
    return 0;
}