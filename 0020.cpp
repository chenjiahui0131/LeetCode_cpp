#include<iostream>
#include<stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        sk.push('#');
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                sk.push(s[i]);
            else {
                char tmp = sk.top();
                sk.pop();
                if (tmp == '#')
                    return false;
                if ((s[i] == ')' and tmp != '(') || (s[i] == ']' and tmp != '[') || (s[i] == '}' and tmp != '{'))
                    return false;
            }
        }
        return sk.top() == '#';
    }
};

int main() {
    //vector<string> strs = {"flower", "flow", "flight"};
    Solution s;
    cout << s.isValid("()[]{") << endl;
}
