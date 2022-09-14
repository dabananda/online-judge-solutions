#include <iostream>

using namespace std;

int main() {
  int testCase, id = 1;
  cin >> testCase;
  while (testCase--) {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) % 3 == 0) {
      cout << "Case " << id << ": " << "Peaceful" <<endl;
    } else {
      cout << "Case " << id << ": " << "Fight" <<endl;
    }
    id++;
  }

  return 0;
}