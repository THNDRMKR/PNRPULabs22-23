#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int numofspaces;
	int numofstars = 1;
	cout << "������� ����� N(����������� � ����� ������ ���� ������ 2)" << endl;
	cin >> n;

	if (n <= 2)
	{
		cout << "������� ���������� �������� N" << endl;
	}

	numofspaces = 0;
	numofstars = n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= numofspaces; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= numofstars; j++)
		{
			cout << "*";
		}

		numofspaces++;
		numofstars--;

		cout << endl;

	}

	return 0;
}