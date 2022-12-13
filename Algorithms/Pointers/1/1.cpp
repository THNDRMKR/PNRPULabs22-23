#include <iostream> 

int main()
{
    int a, b, tmp;
    int* ptr1;
    int* ptr2;

    std::cin >> a;
    ptr1 = &a;
    std::cin>>b;
    ptr2 = &b;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;

    std::cout << *ptr1 << std::endl;
    std::cout << *ptr2 << std::endl;
}