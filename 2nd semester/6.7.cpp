#include <iostream>
#include <string>

int main()
{
	char tmp, str[256];
	std::cin.getline(str, 256);
	for (int i = 0; i < std::string(str).length() - 1; i++)
	{
		for (int j = 0; j < std::string(str).length() - i - 1; j++)
		{
			if (str[j] > str[j + 1])
			{
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < std::string(str).length(); i++)
	{
		std::cout << str[i];
	}
}