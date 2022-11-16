#include <iostream>

using namespace std;

int main()
{
	int n, fact;
	cout << "Type n - power of x: \n";
	cin >> n;

	fact = 1;
	cout << "y = ";
	for (int i = 1; i <= n; i++)
	{
		
		if (i != 1) cout << " + ";
		cout << "x^" << i << "/" << fact;
		fact = 1;
		for (int j = 1; j <= i; j++)
		{
			fact *= j;
		}

	}
}
