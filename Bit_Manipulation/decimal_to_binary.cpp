#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int ans = 0, i = 0;
    while (n != 0)
    {
        // get the right most bit of n
        int bit = n & 1;
        ans = (bit * round(pow(10, i))) + ans; // round is used to preserve the precision of the float value returnedd by pow(float, int)
        n = n >> 1;
        i++;
    }
    cout << "Binary of the number is : " << ans << endl;
    return 0;
}