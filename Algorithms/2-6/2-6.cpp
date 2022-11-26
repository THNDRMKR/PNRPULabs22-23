#include <iostream>

using namespace std;

int main()
{
    int n, spaces;

    cout << "Type n - length of cathetus in stars >2" << endl;
    cin >> n;

    spaces = 0;
    if (n<=2)
    {
        cout << "Wrong n!" << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= spaces; j++)
            { 
                cout << "  ";
            }
            for (int j = i; j >= 1; j--)
            {
                cout << "* ";
            }
            cout << endl;
            spaces++;
        }
        
    }
}