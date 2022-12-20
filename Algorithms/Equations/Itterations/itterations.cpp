//f(x) = x - 2 + sin(1/x) x Э [1;2]
// f'(x) = 1 - cos(1/x)/x^2
// ф(x) = x + λ(f(x) = x - 2 + sin(1/x))
// -1/r < λ < 0, если f'(x) > 0
// 0 < λ < 1/r, если f'(x) < 0
// r = max(|f'(a)|, |f'(b)|) = |f'(b)| = 0,78 ~ 4/5
// λ = -1/5

#include <iostream>
#include <cmath>

int main()
{
    double x, xPrev;
    x = 2;
    xPrev = 0;
    double lambda = -0.2;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (xPrev - 2 + sin(1/xPrev)) + xPrev;
    }
    std :: cout << "Root is approximetly: " << x << std :: endl;
    return 0;
}