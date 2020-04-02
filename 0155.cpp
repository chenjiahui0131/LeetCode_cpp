#include<iostream>
#include<stack>
#include<algorithm>
#include"leetcode.hpp"
using namespace std;

class MinStack {
public:
    stack<int> nums;
    stack<int> minimum;
 
    MinStack() {
    }
    
    void push(int x) {
        nums.push(x);
        if (nums.size() > 1)
            minimum.push(min(x, minimum.top()));
        else
            minimum.push(x);
    }
    
    void pop() {
        nums.pop();
        minimum.pop();
    }
    
    int top() {
        return nums.top();
    }
    
    int getMin() {
        return minimum.top();
    }
};

int main() {
    MinStack *s = new MinStack();
    s->push(-2);
    s->push(0);
    s->push(-3);
    cout << s->getMin() << endl;
    s->pop();
    cout << s->top() << endl;
    cout << s->getMin() << endl;
}
