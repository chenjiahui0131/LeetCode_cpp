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
        return result;
    }

    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int tmp = reverse(x);
        return tmp == x;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(123) << endl;
}
