#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  long long int players, count = 0;
  cin >> players;
  long long int goals[players], fouls[players], max[players];
  for (long long int i = 0; i < players; i++) {
    cin >> goals[i];
    if (goals[i] < 0) {
      count++;
    }
    goals[i] = goals[i] * 20;
  }
  for (long long int i = 0; i < players; i++) {
    cin >> fouls[i];
    max[i] = goals[i] - (fouls[i] * 10);
  }
  if (count == players) {
    cout << 0 << endl;
  } else {
    long long int maxScore = max[0];
    for (long long int i = 0; i < players; i++) {
      maxScore = max[i] > maxScore ? max[i] : maxScore; 
    }
    cout << maxScore << endl;
  }

  return 0;
}