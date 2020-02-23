#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    bool isSymmetric(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL || root2 == NULL)
            return root1 == root2;
        return root1->val == root2->val && isSymmetric(root1->left, root2->right) && isSymmetric(root1->right, root2->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return isSymmetric(root->left, root->right);
    }
};

int main() {
    TreeNode *p = createTree({1, 2, 2, 3, 4, 4, 3});
    TreeNode *q = createTree({1, 2, 2, -1, 3, -1, 3});
    Solution s;
    cout << s.isSymmetric(p) << endl;
    cout << s.isSymmetric(q) << endl;
    return 0;
}
