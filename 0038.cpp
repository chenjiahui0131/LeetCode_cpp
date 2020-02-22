#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        for (int i = 2; i <= n; i++) {
            string tmp = "";
            int point = 1;
            char ch = result[0];
            int count = 1;
            while (point < result.size()) {
                if (ch == result[point]) {
                    count++;
                }
                else {
                    tmp += to_string(count) + ch;
                    ch = result[point];
                    count = 1;
                }
                point++;
            }
            tmp += to_string(count) + ch;
            result = tmp;
        }
        return result;
    }
};

int main() {
    Solution s;
    for (int i = 1; i <= 10; i++)
        cout << s.countAndSay(i) << endl;
}
