#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    std::string str;
    std::cout << "Type number of strings: ";
    std::cin >> num;
    std::ofstream fout("F1.txt");
    if (!fout.is_open())
    {
        return 1;
    }

    std::cin.get();
    for (int i = 0; i < num; i++)
    {
        std::getline(std::cin, str);
        fout << str << std::endl;   
    }
    fout.close();

    std::ifstream f("F1.txt");
    std::ofstream fin("F2.txt");

    if (!f.is_open() && !fin.is_open())
    {
        return 1;
    }

    while (getline(f, str))
    {
        if (str[0] != 'A')
        {
            fin << str << std::endl;
        }
    }
    f.close();
    fin.close();

    std::ifstream f2("F2.txt");
    int syms = 0;
    if (!f2.is_open())
    {
        return 1;
    }
    getline(f2, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            syms++;
        }
        else
        {
            break;
        }
    }
    f2.clear();
    f2.seekg(0);

    while (f2.peek() != EOF)
    {
        getline(f2, str);
        std::cout << str << '\n';
    }

    f2.close();
    std::cout << "Number of symbols in F2 is " << syms << std::endl;
    return 0;
}
