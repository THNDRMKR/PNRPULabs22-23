#include <iostream>
#include <stdarg.h>
template <typename Good>
Good min(int n, Good a, ...)
{
	Good minimum = a;
	va_list ptr;
	va_start(ptr, n);
	for (int i = 1; i <= n; i++)
	{
		if (va_arg(ptr, Good) < minimum) minimum = va_arg(ptr, Good);
	}
	va_end(ptr);
	return minimum;
}
int main()
{
	std::cout << min(5, 16.8, -8.123414, -5.7, 8.000001) << std::endl;
	std::cout << min(10, 16, 8, 7, 8, 11, 19, 0, -17, 10007, 90) << std::endl;
	std::cout << min(12, 1, 5, 19, 8, 10, 0, -7, 16, 194, 18, 567, 14) << std::endl;
}