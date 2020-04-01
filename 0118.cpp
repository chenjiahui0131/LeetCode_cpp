#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        for (int i = 0; i < numRows; i++) {
            vector<int> item;
            item.push_back(1);
            for (int j = 0; j < i - 1; j++)
                item.push_back(ret[i - 1][j] + ret[i - 1][j + 1]);
            if (i > 0)
                item.push_back(1);
            ret.push_back(item);
        }
        return ret;
    }
};

int main() {
    Solution s;
    int k = 5;
    vector<vector<int>> result = s.generate(k);
    for (int i = 0; i < k; i++) {
        for_each(result[i].begin(), result[i].end(), [] (int x) { cout << x << " "; });
        cout << endl;
    }
}
