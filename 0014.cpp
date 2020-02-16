#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        string result = "";
        int min_length = strs[0].length();
        for_each(
            strs.begin() + 1,
            strs.end(), 
            [&](string x) { 
                min_length = min_length < x.length() ? min_length : x.length();
            }
        );
        for (int i = 0; i < min_length; i++) {
            for (int idx = 1; idx < strs.size(); idx++)
                if (strs[idx][i] != strs[0][i])
                    return result;
            result = result + strs[0][i];
        }
        return result;
    }
};

int main() {
    //vector<string> strs = {"flower", "flow", "flight"};
    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
    Solution s;
    cout << s.longestCommonPrefix(strs) << endl;
}
