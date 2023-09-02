#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string word1, word2;
        for (int j = 0; j < 2; j++)
        {
            cin >> word1 >> word2;
        }
        if (word1.length() != word2.length())
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int j = 0; j < word1.length(); j++)
            {
                if (((word1[j] == 'b' || word1[j] == 'p') && (word2[j] == 'p' || word2[j] == 'b')) || ((word1[j] == 'i' || word1[j] == 'e') && (word2[j] == 'e' || word2[j] == 'i')))
                {
                    cout << "YES" << endl;
                    break;
                }
                else
                {
                    cout << "No" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
