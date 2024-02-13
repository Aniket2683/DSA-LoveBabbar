#include <iostream>
using namespace std;

// ****
// ***
// **
// *

int main()
{
    int n;
    cout << "number of rows : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // print stars
        int star = n - row + 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        cout << endl;
        row++;
    }
}