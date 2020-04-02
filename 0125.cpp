#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int pointer = 0;
        for (int i = 0; i < s.length(); i++)
            if (isalnum(s[i]))
                s[pointer++] = tolower(s[i]);
        for (int i = 0, j = pointer - 1; i < j; i++, j--)
            if (s[i] != s[j])
                return false;
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrome("A man, a plan, a canal: Panama") << endl;
}
