#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL)
            return p == q;
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main() {
    TreeNode *p = createTree({1, 2, 3});
    TreeNode *q = createTree({1, 2, 3});
    Solution s;
    cout << s.isSameTree(p, q) << endl;
    return 0;
}
