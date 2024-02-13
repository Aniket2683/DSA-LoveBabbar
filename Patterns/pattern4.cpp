#include <iostream>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main()
{
    int n;
    cout << "Number of rows :";
    cin >> n;
    int count = 1;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}