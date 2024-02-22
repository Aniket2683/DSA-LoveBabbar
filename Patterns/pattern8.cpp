//    1
//   22
//  333
// 4444

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter no. of rows : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int spaces = n - row;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
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