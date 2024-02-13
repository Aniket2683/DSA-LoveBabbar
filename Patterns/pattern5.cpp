#include <iostream>
using namespace std;

// 1
// 2 3
// 3 4 5
// 4 5 6 7

int main()
{
    int n;
    cout << "Number of rows :";
    cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // alternate way without using more space

    int row = 1;
    while (row <= n)
    {
        int col = 0;
        while (col <= row - 1)
        {
            cout << col + row << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}