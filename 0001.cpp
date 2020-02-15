#include<vector>
#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            auto got = map.find(target - nums[i]);
            if (got == map.end())
                map.insert(pair<int, int>(nums[i], i));
            else {
                result.push_back(got->second);
                result.push_back(i);
                return result;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    for (auto iter = result.begin(); iter != result.end(); iter++)
        cout << *iter << endl;
}
