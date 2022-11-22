#include <iostream>
<<<<<<< HEAD
#include <cmath>
=======
>>>>>>> eb6955cf1a17c6431444280b63f9685f464f69ae

using namespace std;

int main()
{
<<<<<<< HEAD
    int n;
float x, fact, sum;

cin >> n >> x;

sum = 1 + x;
fact = 1;

for (int i = 2; i <= n; i++)
{
    fact *= i;
    sum += (pow(x, i) / fact);
}
cout << sum << endl;
}
=======
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
>>>>>>> eb6955cf1a17c6431444280b63f9685f464f69ae
