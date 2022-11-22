#include <iostream>
<<<<<<< HEAD
#include <cmath>
=======
>>>>>>> eb6955cf1a17c6431444280b63f9685f464f69ae

using namespace std;

int main()
{
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