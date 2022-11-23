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

    while (i<=n and !Ansf)
    {
        elem = sin(n+i/n);
        cout << elem << endl;
        if (elem == s)
        {
            Ansf = true;
        }
        else
        {
            i++;
        }
    }
    if (Ansf) cout << "There it is\n";
    else cout << "No such element in here\n";
}
