#include <iostream>
using namespace std;
int main()
{
    int t, n, x, y, xmaxPos, xmaxNeg, ymaxPos, ymaxNeg,moves;
    cin >> t;
    while (t--)
    {
        xmaxPos = 0, xmaxNeg = 0, ymaxPos = 0, ymaxNeg = 0;
        cin >> n;
        while (n--)
        {
            cin >> x >> y;
            if (x > 0)
            {
                xmaxPos = max(xmaxPos, x);
            }
            if (x < 0)
            {
                xmaxNeg = min(xmaxNeg, x);
            }
            if (y > 0)
            {
                ymaxPos = max(ymaxPos, y);
            }
            if (y < 0)
            {
                ymaxNeg = min(ymaxNeg, y);
            }
        }
        moves=xmaxPos*2-xmaxNeg*2+ymaxPos*2-ymaxNeg*2;
        cout<<moves<<endl;
    }
    return 0;
}