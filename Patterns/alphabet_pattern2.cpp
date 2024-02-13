#include <iostream>
using namespace std;

// ABCD
// ABCD
// ABCD
// ABCD

int main()
{
    int n;
    cout << "Number of rows :";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + col - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}