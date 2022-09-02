#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

class Solution {
  public:
    string grade(int marks) {
      if (marks >= 90 && marks <= 100) return "A+";
      else if (marks >= 80 && marks <= 89) return "A";
      else if (marks >= 70 && marks <= 79) return "A-";
      else if (marks >= 60 && marks <= 69) return "B+";
      else if (marks >= 50 && marks <= 59) return "B-";
      else if (marks >= 40 && marks <= 49) return "C";
      else if (marks >= 35 && marks <= 39) return "D";
      else if (marks >= 0 && marks <= 34) return "F";
    }
};

int main() {
  lli testCase, id = 1;
  cin >> testCase;
  while (testCase--) {
    int marks;
    cin >> marks;
    Solution s;
    string result = s.grade(marks);
    cout << "Student " << id << ": " << result << endl;
    id++;
  }

  return 0;
}