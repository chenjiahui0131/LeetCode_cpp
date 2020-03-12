#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    void work(TreeNode* root, int deep, vector<vector<int>> &result) {
        if (deep >= result.size()) {
            vector<int> tmp(0);
            tmp.push_back(root->val);
            result.push_back(tmp);
        }
        else {
            result[deep].push_back(root->val);
        }
        if (root->left != NULL)
            work(root->left, deep+1, result);
        if (root->right != NULL)
            work(root->right, deep+1, result);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result(0);
        if (root == NULL)
            return result;
        work(root, 0, result);
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    TreeNode *p = createTree({3, 9, 20, -1, -1, 15, 7});
    Solution s;
    vector<vector<int>> result = s.levelOrderBottom(p);
    for (auto list = result.begin(); list != result.end(); list++) {
        for (auto element = list->begin(); element != list->end(); element++)
            cout << *element << "\t";
        cout << endl;
    }
    return 0;
}
