#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int result = 0;
        int length = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (length > 0)
                    result = length;
                length = 0;
            }
            else
                length++;
        }
        return length > 0 ? length : result;
    }
};

int main() {
    Solution s;
    cout << s.lengthOfLastWord("Hello World") << endl;
}
