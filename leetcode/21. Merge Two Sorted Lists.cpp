class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *newList = new ListNode();
        ListNode *curr = newList;
        vector<int> v;
        while (list1) {
            v.push_back(list1->val);
            list1 = list1->next;
        }
        while (list2) {
            v.push_back(list2->val);
            list2 = list2->next;
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++) {
            curr->next = new ListNode(v[i]);
            curr = curr->next;
        }
        return newList->next;  // returning actual head;
    }
};