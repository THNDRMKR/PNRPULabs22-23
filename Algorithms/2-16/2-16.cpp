#include <iostream>

using namespace std;

int main()
{
    int n, result;
    cout << "Type n - numberof elements\n";
    cin >> n;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0) result+=i;
        else result-=i;
    }

    cout << "Sum = " << result << endl;
     
}
