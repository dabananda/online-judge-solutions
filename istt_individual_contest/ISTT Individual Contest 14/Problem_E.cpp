#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string s;
    char a, b;
    cin >> s >> a >> b;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == a)
        {
            s[i] = b;
        }
    }
    const regex pattern("^0+(?!$)");
    s = regex_replace(s, pattern, "");
    cout << s << endl;

    return 0;
}