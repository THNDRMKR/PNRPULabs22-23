#include <iostream>

using namespace std;

int main()
{
    int n, spaces;
    cout << "Type n - the base of the triangle in stars(odd and >3)" << endl;
    cin >> n;
    spaces = n - 1;
    if (n < 3 || n%2 == 0)
    {
        cout << "Wrong N" << endl;
    }
    else
    {
        for (int i = 0; i <= n; i+=2)
        {
            for (int j = 0; j <= spaces; j++)
            {
                cout << ' ';
            }
            for (int j = 0; j <= i; j++)
            {
                cout << '*';
            }
            cout << endl;
            spaces--;
        }
    }
    return 0;
}