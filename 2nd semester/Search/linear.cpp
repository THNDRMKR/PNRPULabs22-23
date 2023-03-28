#include <iostream>
#include <ctime>
using namespace std;

int linearSearch(int arr[], int key, int size)
{
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] == key) 
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	srand(time(NULL));
	int size, key;
	cout << "Type array's size: "; 
	cin >> size;
	int* arr = new int[size];
	cout << "Your array: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 101;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Which element to find: ";
	cin >> key;
	cout << endl;
	if (linearSearch(arr, key, size) == -1)
	{
		cout << "error 404" << endl;
	}
	else
	{
		cout << "Element found under number: " << linearSearch(arr, key, size) + 1 << endl;
	}

	delete[] arr;
	return 0;
}