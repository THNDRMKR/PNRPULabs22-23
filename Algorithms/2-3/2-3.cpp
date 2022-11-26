#include <iostream>

using namespace std;

int Factorial(int e)
{
    int F = 1;

    if (e == 0 || e == 1)
    {
        return 1;
    }
    else if (e>1)
    {
        for (int i = 1; i <= e; i++)
        {
            F *= i;
        }
        return F;
    }

}
int main()
{
    int S, n;
    S = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        S += Factorial(2*i)/Factorial(i-1);
    }

    cout << S << endl;
    return 0;
}
