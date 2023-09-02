#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    while (true)
    {
        string name;
        cin >> name;
        if (name == "*")
        {
            break;
        }
        else
        {
            count++;
            if (name == "Hajj")
            {
                cout << "Case " << count << ": " << "Hajj-e-Akbar\n";
            }
            else
            {
                cout << "Case " << count << ": " << "Hajj-e-Asghar\n";
            }
        }
    }

    return 0;
}
