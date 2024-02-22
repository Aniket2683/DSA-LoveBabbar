// 1234
//  234
//   34
//    4

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter no of Rows :";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int sapces = row - 1;
        while (sapces)
        {
            cout << " ";
            sapces--;
        }

        int col = row;
        while (col <= n)
        {
            cout << col;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}