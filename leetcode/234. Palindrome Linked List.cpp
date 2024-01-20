/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *curr = head;
        vector<int> v;
        while (curr) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        int len = v.size();
        int last = len - 1;
        for (int i = 0; i < len / 2; i++, last--) {
            if (v[i] != v[last]) {
                return false;
            }
        }
        return true;
    }
};