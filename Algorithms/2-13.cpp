#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, x1, x2;
    cout << "Type a, b, c - coefficents of quadratic equation\n";

    cin >> a >> b >> c;

    d = pow(b, 2) - 4 * a * c;
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;

        }
        else if (d == 0)
        {
            x1 = -b / (2 * a);
            cout << "x = " << x1 << endl;
        }
        else
        {
            cout << "No roots\n";
        }

}
