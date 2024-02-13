#include <iostream>
using namespace std;

//    *
//   **
//  ***
// ****

int main()
{
    int n;
    cout << "number of rows : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // print spaces
        int spaces = n - row;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }

        // print stars
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}