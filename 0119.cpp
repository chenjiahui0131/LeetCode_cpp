#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex++;
        vector<vector<int>> ret;
        for (int i = 0; i < rowIndex; i++) {
            vector<int> item;
            item.push_back(1);
            for (int j = 0; j < i - 1; j++)
                item.push_back(ret[i - 1][j] + ret[i - 1][j + 1]);
            if (i > 0)
                item.push_back(1);
            ret.push_back(item);
        }
        return ret[rowIndex-1];
    }
};

int main() {
    Solution s;
    int k = 5;
    vector<int> result = s.getRow(k);
    for_each(result.begin(), result.end(), [] (int x) { cout << x << " "; });
    cout << endl;
}
