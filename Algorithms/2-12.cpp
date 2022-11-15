#include <iostream>

using namespace std;

int main()
{
    int n, max, minim, a;

	cin >> n;
    cin >> a;
    minim = a;
    max = a;
	for (int i = 1; i <= n-1; i++)
	{
		cin >> a;
		if (a > max) max = a;
        if (a < minim) minim = a;

	}
	cout << "Sum of max and min num in sequal = " << minim+max << endl;
}