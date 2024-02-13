#include <iostream>
using namespace std;

// ABC
// BCD
// CDE

int main()
{
    int n;
    cout << "Number of rows :";
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char value = 'A' + row - 1;

        while (col <= n)
        {
            char ch = value + col - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}