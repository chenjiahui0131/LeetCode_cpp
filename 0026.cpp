#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = unique(nums.begin(), nums.end());
        return it - nums.begin();
        /*
        if (nums.size() == 0)
            return 0;
        int last_idx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[last_idx] != nums[i]) {
                last_idx++;
                nums[last_idx] = nums[i];
            }
        }
        return last_idx + 1;
        */
    }
};

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution s;
    int length = s.removeDuplicates(nums);
    for (int i = 0; i < length; i++)
        cout << nums[i] << endl;
}
