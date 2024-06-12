#include <iostream>
#include <string>

bool isPalindrome(int x);
std::string revStr(std::string str);

int main(void) {
    std::cout << (isPalindrome(-121) ? "True" : "False") << std::endl;
    return 0;
}

bool isPalindrome(int x) {
    return std::to_string(x) == revStr(std::to_string(x));
}

std::string revStr(std::string str) {
    for (int i = 0, j = str.length() - 1; i <= j; i++, j--) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    return str;
}