#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

int main() {
    TreeNode *p = createTree({3, 9, 20, -1, -1, 15, 7});
    Solution s;
    cout << s.maxDepth(p) << endl;
    return 0;
}
