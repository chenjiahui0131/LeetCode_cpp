#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                idx++;
                nums[idx] = nums[i];
            }
        }
        return idx + 1;
    }
};

int main() {
    vector<int> nums = {0,1,2,2,3,0,4,2};
    Solution s;
    int length = s.removeElement(nums, 2);
    for (int i = 0; i < length; i++)
        cout << nums[i] << endl;
}
