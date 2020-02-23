#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int pointer = m + n - 1;
       m--;
       n--;
       while (m >= 0 || n >= 0) {
           if (n < 0 || (m >=0 && nums1[m] >= nums2[n]))
               nums1[pointer--] = nums1[m--];
           else
               nums1[pointer--] = nums2[n--];
       }
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    s.merge(nums1, 3, nums2, 3);
    for_each(nums1.begin(), nums1.end(), [] (int x) { cout << x << endl; });
}
