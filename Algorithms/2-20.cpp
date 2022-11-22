#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double s, elem;
    bool Ansf = false;
    elem = 0;
    cout << "Type n and s\n";
    cin >> n >> s; 

    for (int i = 1; i <= 30 ; i++)
    {
        elem = sin(n+i/n);
        cout << elem << endl;
        if (!Ansf && elem == s)
        {
            Ansf = true;
        }
    }
    if (Ansf) cout << "There it is\n";
    else cout << "No such element in here\n";
}