#include<iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        while (x) {
            result = result * 10 + (x % 10);
            x /= 10;
        }
        if ((result > INT_MAX) || (result < INT_MIN))
            result = 0;
        return result;
    }
};

int main() {
    Solution s;
    cout << s.reverse(-123) << endl;
}
