#include <iostream>
#include "money.h"

int main()
{
    Money a;
    Money b;
    Money c;
    std::cin >> a;
    std::cin >> b;
    ++a;
    std::cout << a << std::endl;
    c = (a++) + b;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "c=" << c << std::endl;
    b = c / a;
    c = a - b;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "c=" << c << std::endl;
    return 0;
}