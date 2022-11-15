#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout << "Type a, b, c - coefficents of quadratic equation\n"; 

    cin >> a >> b >> c;

    cout << "Roots are x1=" << (-b + sqrt(b*b-4*a*c))/(2*a) << " and x2=" << (-b - sqrt(b*b-4*a*c))/(2*a) << endl;;
}