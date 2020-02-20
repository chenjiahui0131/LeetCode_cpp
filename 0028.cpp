#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getNext(string needle) {
        vector<int> next(needle.size());
        next[0] = -1;
        int last = -1;
        for (int i = 1; i != needle.size(); i++) {
            while (last != -1 && needle[last + 1] != needle[i]) {
                last = next[last];
            }
            if (needle[last + 1] == needle[i]) {
                next[i] = last + 1;
                last++;
            }
            else
                next[i] = -1;
        }
        return next;
    }

    int strStr(string haystack, string needle) {
        if (needle.size() == 0)
            return 0;
        vector<int> next = getNext(needle);
        int j = -1;
        for (int i = 0; i != haystack.size(); i++) {
            while (j != -1 && haystack[i] != needle[j + 1]) {
                j = next[j];
            }
            if (haystack[i] == needle[j + 1])
                j++;
            if (j == needle.size() - 1)
                return i - needle.size() + 1;
        }
        return -1;
    }
};

int main() {
    Solution s;
    cout << s.strStr("hello", "ll") << endl;
}
