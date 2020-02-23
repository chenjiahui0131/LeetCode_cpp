#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
       if (n == 1)
           return 1;
       if (n == 2)
           return 2;
       int prevprev = 1, prev = 2;
       for (int i = 3; i <= n; i++) {
           int cur = prevprev + prev;
           prevprev = prev;
           prev = cur;
       }
       return prev;
    }
};

int main() {
    Solution s;
    cout << s.climbStairs(3) << endl;
}
