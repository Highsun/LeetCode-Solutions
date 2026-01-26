#include <iostream>

int main() {
    int n = 4;

    // if it is my turn and there are n stones left:
    // 1, 2, 3 - true, I get all
    // 4 - false
    // 5 - true, I get 1 this turn and the opposite gets 4
    // 6 - true, I get 2 this turn and the opposite gets 4
    // 7 - true, I get 3 this turn and the opposite gets 4
    // 8 - false, no matter how many stones do I get, the oppspsite gets 5, 6 or 7
    // ...
    bool end;
    if (n % 4 == 0)
        end = false;
    else
        end = true;

    std::cout << end << '\n';

    return 0;
}