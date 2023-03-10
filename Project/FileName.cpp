#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h> // 如果是 Windows 操作系统，需要包含此头文件

int main() {
    // 定义变量
    int red = 0, green = 0, blue = 0;

    // 设置随机种子
    srand((unsigned)time(NULL));

    // 循环变色
    while (1) {
        // 生成随机数
        red = rand() % 256;    // 0 ~ 255
        green = rand() % 256;  // 0 ~ 255
        blue = rand() % 256;   // 0 ~ 255

        // 设置颜色
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, RGB(red, green, blue));

        // 延迟一段时间
        Sleep(100);  // 单位：毫秒，此处为 1 秒

        // 清空屏幕
        system("cls");  // 如果是 Linux 操作系统，需要使用 "clear" 命令
    }

    return 0;
}
