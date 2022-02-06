#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        string url;
        cin >> url;

        if (url[4] != 's') {
            url.insert(4, "s");
        }

        cout << "Case " << i + 1 << ": " << url << endl;
    }

    return 0;
}