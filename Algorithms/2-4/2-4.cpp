#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    int numofspaces;
    int numofstars = 1;
    cout << "������� ��������� ��������������� ������������ N (�������� � ����� ������ ���� ������ 3)" << endl;
    cin >> n;

    if ((n <= 3) || ((int)n % 2 != 1))
    {
        cout << "������� ���������� �������� N" << endl;
    }

    numofspaces = n / 2;

    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        for (int j = 1; j <= numofspaces; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= numofstars; j++)
        {
            cout << "*";
        }

        cout << endl;

        numofspaces--;
        numofstars += 2;
    }

    return 0;
}