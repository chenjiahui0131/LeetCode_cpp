#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        digits[length - 1]++;
        for (int i = length - 1; i > 0; i--) {
            if (digits[i] <= 9)
                break;
            digits[i] = 0;
            digits[i - 1]++;
        }
        if (digits[0] > 9) {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> digits = {9, 9, 9};
    vector<int> result = s.plusOne(digits);
    for_each(result.begin(), result.end(), [](int x) { cout << x << endl; });
}
