#include <iostream>
#include <complex>
#include <cmath>

float division(int a, int b)
{
	return float(a) / float(b);
}
std::complex<float> division(std::complex<float> a, std::complex<float> b)
{
	return a / b;
}
int main()
{
	int a, b;
	std::cout << "Type any 2 integer numbers\n";
	std::cin >> a >> b;
	std::cout << a << "/" << b << " = " << division(a, b) << "\n\n";
	float r1, r2, im1, im2;
	std::cout << "Type real and imaginary part of the 1st number\n";
	std::cin >> r1 >> im1;
	std::cout << "Type real and imaginary part of the 2nd number\n";
	std::cin >> r2 >> im2;
	std::cout << "Numbers are: " << r1 << " + (" << im1 << "i) and " << r2 << " + (" << im2 << "i)\n";
	std::complex<float>z1(r1, im1);
	std::complex<float>z2(r2, im2);
	std::cout << division(z1, z2);
	return 0;
}