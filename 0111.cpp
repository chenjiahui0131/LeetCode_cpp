#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        return (left == 0 || right == 0) ? max(left, right) + 1 : min(left, right) + 1;
    }
};

int main() {
    TreeNode *tree = createTree({3, 9, 20, -1, -1, 15, 7}); 
    Solution s;
    cout << s.minDepth(tree) << endl;
    return 0;
}
