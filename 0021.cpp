#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
        /*
        ListNode *result;
        if (l1->val < l2->val) {
            result = l1;
            l1 = l1->next;
        }
        else {
            result = l2;
            l2 = l2->next;
        }
        ListNode *last = result;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                last->next = l1;
                l1 = l1->next;
                last = last->next;
            }
            else {
                last->next = l2;
                l2 = l2->next;
                last = last->next;
            }
        }
        if (l1 == NULL)
            last->next = l2;
        else
            last->next = l1;
        return result;
        */
    }
};

int main() {
    Solution s;
    ListNode *l1 = createList({1});
    ListNode *l2 = createList({2});
    ListNode *result = s.mergeTwoLists(l1, l2);
    showList(result);
    return 0;
}
