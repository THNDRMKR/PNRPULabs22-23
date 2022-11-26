#include <iostream>

using namespace std;

int main()
{
    int n, a, num;
	
	cin >> n;
    num = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (num == 0)
		{
			num = a;
		}
	}
    if (num == 0) cout << "All elements are 0\n";
    else if (num < 0) cout << "First non-zero element is negative\n";
    else cout <<  "First non-zero element is positive\n";
}