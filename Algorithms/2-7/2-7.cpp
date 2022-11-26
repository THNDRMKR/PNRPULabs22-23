#include <iostream>

using namespace std;

int main()
{
    int n, spaces, side;

    cout << "Type n - number of stars in a square(must be divisible by 4)" << endl;
    cin >> n;
    side = (n+4)/4;
    spaces = side - 2;
    if (n%4!= 0  || n <= 4)
    {
        cout << "Wrong number!" << endl;;
    }
    else
    {

        for (int i = 1; i <= side; i++)
        {
            if (i == 1 || i == side)
            {
                for (int j = 1; j <= side; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            else
            {
                cout << "* ";
                for (int j = 1; j <= spaces; j++)
                {
                    cout << "  ";
                }
                cout << "* " << endl;
            }
                
            
        }
       
    }
    cout << endl;



    cout << "Type n - number of stars in a square's side" << endl;
    cin >> n;
    
    if (n<=1)
    {
        cout << "How do you imagine square with that side?" << endl;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
       
    }



    cout << "Type n - number of stars in a square's side" << endl;
    cin >> n;
    if (n<=1)
    {
        cout << "Wrong number!" << endl;;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == n)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            else
            {
                cout << "* ";
                for (int j = 1; j <= n-2; j++)
                {
                    cout << "  ";
                }
                cout << "* " << endl;
            }
                
            
        }
       
    }
}