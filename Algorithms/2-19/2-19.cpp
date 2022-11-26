#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Type n - lenght of sequance\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    cout << "Sum = " << sum << endl;
}