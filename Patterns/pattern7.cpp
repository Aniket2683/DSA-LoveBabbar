// 1111
//  222
//   33
//    4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of rows :";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        int col = 1;
        while (col <= n - row + 1)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}