#include <iostream>
#include <algorithm>

#define TLE ios::sync_with_stdio(0);cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    TLE;
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int heights[n];
        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }
        sort(heights,heights + n);
        for (int i = 1; i < n; i++)
        {
            if ((heights[i] - heights[i-1]) % 2 != 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}