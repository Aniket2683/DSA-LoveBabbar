#include <iostream>
using namespace std;

// 1
// 2 1
// 3 2 1
// 4 3 2 1

int main()
{
    int n;
    cout << "Number of rows :";
    cin >> n;
    int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value--;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // alternate way without using value

    while (row <= n)
    {
        int col = 0;
        while (col <= row - 1)
        {
            cout << row - col << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}