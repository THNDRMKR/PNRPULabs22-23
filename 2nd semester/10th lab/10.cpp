#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));

    int row, col;
    cout << "Type matrix size: ";
    cin >> row >> col;
    int** arr = new int*[row];
    cout << "Your massive is:" << endl;
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 95 + 5;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Which column to delete: ";
    int c;
    cin >> c;

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < col - 1; j++)
        {
            if (j < c - 1)
            {
                arr[i][j] = arr[i][j];
            }
            else
            {
                arr[i][j] = arr[i][j + 1];
            }

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;
}
