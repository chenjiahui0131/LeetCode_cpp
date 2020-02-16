#include<iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int i = 0;
        while (i < s.length()) {
            switch (s[i]) {
                case 'M':
                    result += 1000;
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'C':
                    if (s[i + 1] == 'D') {
                        result += 400;
                        i += 2;
                        continue;
                    }
                    else if (s[i + 1] == 'M') {
                        result += 900;
                        i += 2;
                        continue;
                    }
                    result += 100;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'X':
                    if (s[i + 1] == 'L') {
                        result += 40;
                        i += 2;
                        continue;
                    }
                    else if (s[i + 1] == 'C') {
                        result += 90;
                        i += 2;
                        continue;
                    }
                    result += 10;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'I':
                    if (s[i + 1] == 'V') {
                        result += 4;
                        i += 2;
                        continue;
                    }
                    else if (s[i + 1] == 'X') {
                        result += 9;
                        i += 2;
                        continue;
                    }
                    result += 1;
                    break;
            }
            i += 1;
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.romanToInt("MCMXCIV") << endl;
}
