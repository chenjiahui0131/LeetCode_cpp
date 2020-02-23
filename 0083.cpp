#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return NULL;
        ListNode *last = head;
        ListNode *cur = head->next;
        while (cur != NULL) {
            if (last->val != cur->val) {
                last->next = cur;
                last = cur;
            }
            cur = cur->next;
        }
        last->next = NULL;
        return head;
    }
};

int main() {
    Solution s;
    ListNode *head = createList({1, 1, 2, 3, 3});
    s.deleteDuplicates(head);
    showList(head);
    return 0;
}
