#include <iostream>

using namespace std;

int main()
{
    int n, spaces;

    cout << "Type n - length of cathetus in stars >2" << endl;
    cin >> n;

    spaces = n-2;
    
    if (n<=2)
    {
        cout << "Wrong n!" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= spaces; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout <<endl;
            spaces--;
        }
        
    }
}