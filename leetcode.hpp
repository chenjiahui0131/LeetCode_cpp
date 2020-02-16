#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *createList(vector<int> nums) {
    if (nums.size() == 0)
        return NULL;
    ListNode *result = new ListNode(nums[0]);
    ListNode *last = result;
    for (int i = 1; i < nums.size(); i++) {
        ListNode *current = new ListNode(nums[i]);
        last->next = current;
        last = current;
    }
    return result;
}

void showList(ListNode *p) {
    if (p == NULL)
        return;
    cout << p->val;
    p = p->next;
    while (p != NULL) {
        cout << " -> " << p->val;
        p = p->next;
    }
    cout << endl;
}
