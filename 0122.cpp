#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        if (prices.size() == 0)
            return result;
        int minValue = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > minValue) {
                result += prices[i] - minValue;
            }
            minValue = prices[i];
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << s.maxProfit(prices) << endl;
}
