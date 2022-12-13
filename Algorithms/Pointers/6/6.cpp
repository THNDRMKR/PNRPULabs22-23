#include <iostream>
#include <string>

int main() {
    int countC, countV;
    countC = countV = 0;
    std::string st;
    std::cout<<"Введите строку"<<std::endl;
    std::cin>>st;   
    const char* pt = st.c_str();
    for (int i = 0; i < st.length(); i++)
    {
        switch(*pt)
        {
            case 'А': 
            case 'У':
            case 'Е':
            case 'О':
            case 'Э':
            case 'Ю':
            case 'Я':
            case 'Ы':
            case 'И':   
            case 'а':
            case 'у':
            case 'е':
            case 'о':
            case 'э':
            case 'ю':
            case 'я':
            case 'ы':
            case 'и': 
                countV++;
                break;
            default: 
            {
                countC++;
                break;
            }
            pt++;
        }
    }
    
    std::cout<<"Количество гласных:  "<<countV<<std::endl;
    std::cout<<"Количество согласных:  "<<countC<<std::endl;
    return 0;
}