//f(x) = x - 2 + sin(1/x) x Э [1;2]
// f'(x) = 1 - cos(1/x)/x^2
//f''(x) = (x*cos(1/x)-sin(1/x))/x^4
//f(b)*f''(b)>0 => x0 = b

#include <iostream>
#include <cmath>

int main()
{
    double x, xPrev;
    x = 2;
    xPrev = 1;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - (xPrev - 2 + sin(1/xPrev))/(1 - cos(1/x)/pow(xPrev,2));
    }
    std :: cout << "Root is approximetly: " << x << std :: endl;
    return 0;
}