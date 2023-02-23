#include <iostream>
#include <stdlib.h>
int main()
{
	const int N = 100;
	int ind = 0, H;
	int arr[N];
	for (int i = 0; i < N-1; i++)
	{
		arr[i] = rand() % 10;
		std::cout << arr[i] << " ";
		if (arr[i] == 0)
		{
			ind = i;
		}
	}
	for (int i = ind; i < N; i++)
	{
		arr[i] = arr[i+1];
	}
	std::cout << "\n" << "Type index after which will be 100\n";
	std::cin >> H;
	for (int i = N-1; i > H; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[H] = 100;
	for (int i = 0; i < N-1; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}