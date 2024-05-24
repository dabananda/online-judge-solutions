#include <bits/stdc++.h>

using namespace std;

class Student {
 public:
  int id;
  string name;
  char section;
  int marks;
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    Student s[3];
    for (int i = 0; i < 3; i++) {
      cin >> s[i].id >> s[i].name >> s[i].section >> s[i].marks;
    }
    int idx = 0;
    for (int i = 1; i < 3; i++) {
      if (s[i].marks > s[idx].marks ||
          (s[i].marks == s[idx].marks && s[i].id < s[idx].id)) {
        idx = i;
      }
    }
    cout << s[idx].id << " " << s[idx].name << " " << s[idx].section << " " << s[idx].marks << endl;
  }

  return 0;
}
