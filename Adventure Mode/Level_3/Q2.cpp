#include <iostream>
#include <stack>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> tokens = {"4", "13", "5", "/", "+"};

    std::stack<int> s;
    for (const std::string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();

            if (token == "+")
                s.push(a + b);
            else if (token == "-")
                s.push(a - b);
            else if (token == "*")
                s.push(a * b);
            else if (token == "/")
                s.push(a / b);
        } else {
            s.push(std::stoi(token));
        }
    }

    std::cout << s.top() << std::endl;

    return 0;
}