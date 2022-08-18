#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, s, i, n, digit;
    cin >> t;
    while (t--)
    {
        cin >> s;
        n = 0;
        digit = 9;
        for (i = 0; i < 9; i++)
        {
            if (s > digit)
            {
                n += digit * pow(10, i);
                s -= digit--;
            }
            else
            {
                n += s * pow(10, i);
                break;
            }
        }
        cout << n << endl;
    }
    return 0;
}