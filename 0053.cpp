#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = *(max_element(nums.begin(), nums.end()));
        int left = 0, right = -1, sum = 0;
        for (right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum < 0 && left <= right)
                sum -= nums[left++];
            if (sum > result && left <= right)
                result = sum;
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-1, 1, 2, 1};
    cout << s.maxSubArray(nums) << endl;
}
