#include <iostream>

using namespace std;
int main()
{
    string n;
    cout << "Do you wanna see a cube?(yes/no)" << endl;
    cin >> n;
    if (n=="yes")
    {
        cout << "    * * * * *" << endl;
        cout << "  *       * *" << endl;
        cout << "* * * * *   *" << endl;
        cout << "*       *   *" << endl;
        cout << "*       *   *" << endl;
        cout << "*       * *" << endl;
        cout << "* * * * *" << endl;

    }
    else if (n =="no")
    {
        cout << "ok" << endl;
    }
    else
    {
        cout << "I asked you a question" << endl;
    }
}