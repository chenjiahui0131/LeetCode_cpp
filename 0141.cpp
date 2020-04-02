#include<iostream>
#include<vector>
#include<algorithm>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p1 = head, *p2 = head;
        while (p2 && p2->next) {
            p1 = p1->next;
            p2 = p2->next->next;
            if (p1 == p2)
                return true;
        }
        return false;
    }
};

int main() {
    Solution s;
    ListNode * p = new ListNode(3);
    p->next = new ListNode(2);
    p->next->next = new ListNode(0);
    p->next->next = new ListNode(-4);
    p->next->next->next = p->next;
    cout << s.hasCycle(p) << endl;
}
