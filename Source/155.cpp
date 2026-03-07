#include <stack>

// Caution: this is a direct solution which cannot be compiled and executed!

class MinStack {
   private:
    std::stack<int> dataStack;
    std::stack<int> minStack;

   public:
    MinStack() {}

    void push(int val) {
        dataStack.push(val);

        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (dataStack.top() == minStack.top()) {
            minStack.pop();
        }
        dataStack.pop();
    }

    int top() { return dataStack.top(); }

    int getMin() { return minStack.top(); }
};