#include <iostream>

#define rows 20

void rowSwap(int arr[][rows], int nCol, int nStr)
{
    for (int i = 0; i < rows; i++)
    {
            std::swap(arr[nStr-1][i], arr[i][nCol-1]);   
    }
    
}
void display(int arr[][rows])
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
int main()
{
    int ty[rows][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            ty[i][j] = rand() % 10;
        }
    }
    display(ty);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if(ty[0][j]==ty[i][0]) rowSwap(ty,j+1,i+1);
        }
    }

    display(ty);

}
