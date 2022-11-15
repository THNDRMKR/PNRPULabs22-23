#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    int sum = 0;

    cout << "Type n - natural number\n";
    cin >> n;
    
    while(n>0)
    {
        sum += n%10;
        n= n/10;
    }
    cout << sum << endl;
}