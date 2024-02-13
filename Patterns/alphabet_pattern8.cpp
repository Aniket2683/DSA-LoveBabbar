#include <iostream>
using namespace std;

// D
// C D
// B C D
// A B C D

int main()
{

    int n;
    cout << "Nuber of rows : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'D' - row + col;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}