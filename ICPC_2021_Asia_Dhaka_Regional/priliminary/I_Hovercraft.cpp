#include <iostream>

using namespace std;

int main() {
  while (true) {
    float l, w;
    cin >> l >> w;
    if (l == 0 && w == 0) break;
    else printf("%0.4f\n", l * 0.75 + w);
  }

  return 0;
}