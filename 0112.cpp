#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum, int acc=0) {
        if (!root)
            return false;
        if (!root->left && !root->right)
            return acc + root->val == sum;
        return hasPathSum(root->left, sum, acc + root->val) || hasPathSum(root->right, sum, acc + root->val);
    }
};

int main() {
    TreeNode *tree = createTree({5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, -1, -1, -1, 1}); 
    Solution s;
    cout << s.hasPathSum(tree, 22) << endl;
    return 0;
}
