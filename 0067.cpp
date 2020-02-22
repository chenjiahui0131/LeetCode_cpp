#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        bool carry = false;
        for (int p1 = a.size() - 1, p2 = b.size() - 1; p1 >= 0 || p2 >= 0; p1--, p2--) {
            int tmp = carry;
            if (p1 >= 0) tmp += a[p1] - '0';
            if (p2 >= 0) tmp += b[p2] - '0';
            result += char(tmp % 2 + '0');
            carry = tmp >= 2;
        }
        if (carry)
            result = result + "1";
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution s;
    cout << s.addBinary("1010", "1011") << endl;
    cout << s.addBinary("11", "1") << endl;
}
