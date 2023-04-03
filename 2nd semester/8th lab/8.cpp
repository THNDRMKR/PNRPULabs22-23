#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <iomanip>
#include <fstream>
struct student
{
	char fio[256];
	char address[256];
	int group;
	float rating;
};

void tabl()
{
    for (int z = 0; z < 40; z++)
    {
        std::cout << ' ';
    }
}

void deploy(student* s, int n)
{
    std::cout << '|' << ' ' << std::setw(30) << "Surname Name Fathersname";
    std::cout << '|' << ' ' << std::setw(40) << "Home address";
    std::cout << '|' << ' ' << std::setw(40) << "Group";
    std::cout << '|' << ' ' << std::setw(48) << "Social rating" << '|';
    tabl();
    for (int i = 0; i < n; i++)
    {
        std::cout << ' ' << ' ' << std::setw(30) << s[i].fio << '|';
        std::cout << ' ' << std::setw(40) << s[i].address << '|';
        std::cout << ' ' << std::setw(40) << s[i].group << '|';
        std::cout << ' ' << std::setw(48) << s[i].rating << '|';
        tabl();
    }
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    student* s;
    int n;
    std::cout << "Type number of students: ";
    std::cin >> n;
    s = new student[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Type SNF: ";
        std::cin.get();
        std::cin.getline(s[i].fio, 79);
        std::cout << "Type student's home address: ";
        std::cin.getline(s[i].address, 79);
        std::cout << "type group: ";
        std::cin >> s[i].group;
        std::cout << "Type social rating: ";
        std::cin >> s[i].rating;
    }
    deploy(s, n);

    std::ofstream fp("test.txt");
    if (!fp.is_open())
    {
        std::cout << "Error!" << std::endl;
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        fp << s[i].fio << ' ';
        fp << s[i].address << ' ';
        fp << s[i].group << ' ';
        fp << s[i].rating << ' ' << "\n";
    }
    fp.close();
    std::ifstream fs("test.txt");

    if (!fs.is_open())
    {
        std::cout << "Error!" << std::endl;
        return 1;
    }

    while (fs.peek() != EOF)
    {
        std::string str;
        getline(fs, str);
        std::cout << str << "\n";
    }
    fs.close();  

    std::ofstream f1("f1.txt");
    std::ofstream f2("tmp.txt");
    float x;

    if (!f1.is_open())
    {
        std::cout << "Error!" << std::endl;
        return 1;
    }

    std::cout << "Which rating is passable?: ";
    std::cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (x < s[i].rating)
        {
            f2 << s[i].fio << ' ';
            f2 << s[i].address << ' ';
            f2 << s[i].group << ' ';
            f2 << s[i].rating << ' ' << "\n";
        }
    }
    f1.close();
    f2.close();
    remove("f1.txt");
    rename("temp.txt", "f1.txt");

    std::ofstream fg;
    fg.open("f1.txt", std::ios::app);

    if (!fg.is_open())
    {
        std::cout << "Error!" << std::endl;
        return 1;
    }

    student r;

    std::cout << "Type SNF: ";
    std::cin.get();
    std::cin.getline(r.fio, 79);
    std::cout << "Type student's home address: ";
    std::cin.getline(r.address, 79);
    std::cout << "type group: ";
    std::cin >> r.group;
    std::cout << "Type social rating: ";
    std::cin >> r.rating;

    fp << r.fio << ' ';
    fp << r.address << ' ';
    fp << r.group << ' ';
    fp << r.rating << ' ' << '\n';

    fp.close();
    deploy(s, n);
    delete[] s;
    return 0;
}