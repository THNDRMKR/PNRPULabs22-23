#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout << "Type n - numberof elements\n";
    cin >> n;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i*pow(-1, i);
    }

    cout << "Sum = " << sum << endl;
     
}