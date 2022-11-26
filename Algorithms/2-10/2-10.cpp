#include <iostream>

using namespace std;

int main()
{
	int n, max = 0, maxpl = 0, a;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a > max)
		{
			max = a;
			maxpl = i;
		}
	}
	cout << "Max num " << max << " was on " << maxpl << "th place" << endl;;
}