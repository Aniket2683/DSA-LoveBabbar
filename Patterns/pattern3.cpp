#include <iostream>
using namespace std;

// 1
// 22
// 333
// 4444

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
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}