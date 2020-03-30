#include<iostream>
#include<vector>
#include"leetcode.hpp"
using namespace std;

class Solution {
public:
    TreeNode* work(vector<int>&nums, int left, int right) {
        if (left > right)
            return NULL;
        int mid = (left + right) >> 1;
        TreeNode *node = new TreeNode(nums[mid]);
        node->left = work(nums, left, mid - 1);
        node->right = work(nums, mid + 1, right);
        return node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return work(nums, 0, nums.size() - 1);
    }
};

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9};
    Solution s;
    TreeNode *result = s.sortedArrayToBST(nums);
    showTree(result);
    return 0;
}
