#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Type - the length of cathetus(>3)" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    
}
