#include <iostream>
using namespace std;
// A
// B C
// C D E
// D E F G

int main()
{

    int n;
    cout << "Nuber of rows : ";
    cin >> n;

    int row = 1;

    char start = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char value = start + col + row - 2;
            cout << value << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}