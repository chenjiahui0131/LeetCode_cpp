#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid;
        while (left <= right) {
            mid = (left + right) >> 1;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
        /*
        if (nums.size() == 0)
            return 0;
        if (target > nums[nums.size() - 1])
            return nums.size();
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] >= target)
                return i;
        return 0;
        */
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 6};
    Solution s;
    cout << s.searchInsert(nums, 5) << endl;
    cout << s.searchInsert(nums, 2) << endl;
}
