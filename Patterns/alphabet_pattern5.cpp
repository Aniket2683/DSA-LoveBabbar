#include <iostream>
using namespace std;

// A
// BB
// CCC
// DDDD

int main()
{
    int n;
    cout << "Number of rows :";
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}