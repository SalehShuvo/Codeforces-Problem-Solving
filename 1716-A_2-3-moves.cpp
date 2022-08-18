#include <iostream>

using namespace std;

int main()
{
    int t, n, moves;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
            moves = 2;
        else if (n == 2 || n == 3)
            moves = 1;
        else if (n % 3 == 0)
            moves = n / 3;
        else if (n % 3 == 1)
            moves = 2 + (n - 4) / 3;
        else
        {
            moves = 1 + (n - 2) / 3;
        }
        cout << moves << endl;
    }
    return 0;
}