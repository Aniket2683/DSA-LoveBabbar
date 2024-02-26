#include <iostream>
using namespace std;

//    1
//   121
//  12321
// 1234321

int main()
{

    int n;
    cout << "number of rows:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // print sapces
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // print tri 1

        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }

        // print tri 2

        int val = row - 1;
        while (val)
        {
            cout << val;
            val--;
        }
        cout << endl;
        row++;
    }
}