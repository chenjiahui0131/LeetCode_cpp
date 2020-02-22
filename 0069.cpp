#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x;
        while (left <= right) {
            long long mid = (left + right) >> 1;
            if (mid * mid == x)
                return mid;
            else if (mid * mid > x)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return right;
    }
};

int main() {
    Solution s;
    cout << s.mySqrt(4) << endl;
    cout << s.mySqrt(9) << endl;
    cout << s.mySqrt(8) << endl;
}
