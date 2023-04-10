#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<int> stack;
    int n;
    std::string str;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> str;
        if (str == "push") {
            int num;
            std::cin >> num;
            stack.push(num);
        }
        else if (str == "pop") {
            if (!stack.empty()) {
                std::cout << stack.top() << "\n";
                stack.pop();
            } else {
                std::cout << "-1" << "\n";
            }
        }
        else if (str == "size") {
            std::cout << stack.size() << "\n";
        }
        else if (str == "empty") {
            if (stack.empty()) {
                std::cout << "1"<< "\n";
            } else {
                std::cout << "0" << "\n";
            }
        }
        else if (str == "top") {
            if (!stack.empty()) {
                std::cout << stack.top() << "\n";
            } else {
                std::cout << "-1" << "\n";
            }
        }
    }
    return 0;
}