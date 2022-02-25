// 鸡兔同笼v1.0.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <fstream>

int afor(int x, int y)
{
    return x * 2 + y * 4;
}

int main()
{
    int call{};
    int a;
    int jiao{};
    int x{};
    int y{};
    int Normal_exit{};


    std::cout << "输入脚的总数：";
    std::cin >> jiao;

    std::cout << "输入有多少头：";
    std::cin >> a;

    x = a;
    for (;;)
    {
        int temp{0};
        temp = afor(x, y);
        if (x < 0)
        {
            Normal_exit = 0;
            break;
        }
        else if(temp == jiao)
        {
            std::cout << "========结果========\n";
            std::cout << "鸡的数量是：" << x << "\n" << "兔子的数量是：" << y << "\n" << "运算了" << call << "次" << "\n";
            Normal_exit = 1;
            break;
        }
        else
        {
            x -= 1;
            y += 1;

        }
        ++call;
    }
    if (Normal_exit != 1)
    {
        std::cout << "==================错误===================\n";
        std::cout << "程序未正常求出结果\n";
        std::cout << "解决方法:重新打开程序并检查是否输入错误\n";
    }
    system("pause");

    return 0;
}