#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    int s = 0;
    bool e;

    cout << "Type n - natural number and s - number\n";
    cin >> n >> s;
    
    while(n>0)
    {
        if (n%10 == s) e = true;
        n= n/10;
    }

    if (e) cout << "There is s in n"<< endl;
    else cout << "There is no s in n"<< endl;

}