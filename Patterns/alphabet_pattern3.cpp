#include <iostream>
using namespace std;

// ABC
// DEF
// GHI

int main()
{
    int n;
    cout << "Number of rows :";
    cin >> n;
    int row = 1;
    char value = 'A';
    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {
            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}