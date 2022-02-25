#include <iostream>

int call;

int afor(int x, int y)
{
    return x * 2 + y * 4;
}

int main()
{
    int temp;
    int a;
    int x{};
    int y{};

    std::cout << "输入脚的总数：";
    std::cin >> temp;
    const int jiao{temp};

    std::cout << "输入有多少头：";
    std::cin >> a;

    x = a;
    for (call = 0;call < 10000;call++)
    {
        temp = afor(x,y);
        if (jiao == temp)
        {
            std::cout << "========结果========\n";
            std::cout << "鸡的数量是：" << x << "\n" << "兔子的数量是：" << y << "\n" << "运算了" << call << "次" << "\n";
            break;
        }
        else
        {
            x = x - 1;
            y = y + 1;
        }
    }
    system("pause");

    return 0;
}