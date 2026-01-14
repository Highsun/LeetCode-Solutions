#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> operations = {"--X", "X++", "X++"};

    int X = 0;
    for (std::string oper : operations) {
        if (oper[0] == '-' || oper[2] == '-')
            X--;
        else
            X++;
    }
    std::cout << X << '\n';

    return 0;
}