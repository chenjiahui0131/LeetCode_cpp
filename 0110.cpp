#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
    struct Data {
        int height;
        bool isBalanced;
        Data(int x, bool y) : height(x), isBalanced(y) {}
    };
public:
    Data work(TreeNode* root) {
        if (root == NULL)
            return Data(0, true);
        if (root->left == NULL && root->right == NULL)
            return Data(1, true);
        Data left = work(root->left);
        if (left.isBalanced == false)
            return Data(0, false);
        Data right = work(root->right);
        if (right.isBalanced == false || abs(right.height - left.height) > 1) 
            return Data(0, false);
        return Data(max(right.height, left.height) + 1, true);
    }

    bool isBalanced(TreeNode* root) {
        return work(root).isBalanced;
    }
};

int main() {
    TreeNode *tree = createTree({1, 2, 3, 4, 5, -1, -1, 6, 7}); 
    Solution s;
    bool result = s.isBalanced(tree);
    cout << result << endl;
    return 0;
}
