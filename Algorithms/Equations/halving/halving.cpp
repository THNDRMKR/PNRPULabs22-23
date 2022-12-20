// f(x) = x - 2 + sin(1/x) x Э [1;2];


#include <iostream>
#include <cmath>

int main()
{
    float a = 1, b = 2, c = (a+b)/2;
    float fA, fB, fC;
    double eps = 0.00001;
    while (b - a > eps)
    {
        c = (a + b) / 2;
        fA = a - 2 + sin(1/a);
        fB = b - 2 + sin(1/b);
        fC = c - 2 + sin(1/c);
        if (fA * fC < 0) { b = c; }
        else if (fC * fB < 0) { a = c; }
        else { std::cout << "Something's wrong!!!" << std::endl; }
    }

    std::cout << "Roots are in interval (" << a << "; " << b << ")\n" ;

    return 0;
}