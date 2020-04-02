#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for_each(nums.begin(), nums.end(), [&] (int x) {result ^= x;});
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << s.singleNumber(nums) << endl;
}
