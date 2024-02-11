// Author: Dabananda Mitra
// Email: imdmitra@gmail.com
// Date: 11 February 2024, 09:09:00 (Bangladesh Time)
// LeetCode: https://leetcode.com/dabananda/
// Codeforces: https://codeforces.com/profile/dabananda
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Time complexity: O(n) - where n is the length of the input string 'address'
// Space complexity: O(n) - additional space used for the modified string
// Problem link: https://leetcode.com/problems/defanging-an-ip-address/

#include <string>

class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for (char c : address) {
            if (c == '.') {
                s += "[.]";
            } else {
                s += c;
            }
        }
        return s;
    }
};
