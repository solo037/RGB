#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h> // ����� Windows ����ϵͳ����Ҫ������ͷ�ļ�

int main() {
    // �������
    int red = 0, green = 0, blue = 0;

    // �����������
    srand((unsigned)time(NULL));

    // ѭ����ɫ
    while (1) {
        // ���������
        red = rand() % 256;    // 0 ~ 255
        green = rand() % 256;  // 0 ~ 255
        blue = rand() % 256;   // 0 ~ 255

        // ������ɫ
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, RGB(red, green, blue));

        // �ӳ�һ��ʱ��
        Sleep(100);  // ��λ�����룬�˴�Ϊ 1 ��

        // �����Ļ
        system("cls");  // ����� Linux ����ϵͳ����Ҫʹ�� "clear" ����
    }

    return 0;
}
