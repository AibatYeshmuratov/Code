#include "palindrome.h"

bool IsPalindrome(const std::string& str) {
    std::string string_chars;
    string_chars = "";
    int count = 0;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == ' ') {
            continue;
        } else {
            string_chars = string_chars + str[i];
        }
    }
    for (size_t i = 0; i < string_chars.length() / 2; ++i) {
        if (string_chars[i] != string_chars[string_chars.length() - 1 - i]) {
            ++count;
        }
    }
    if (count >= 1) {
        return false;
    }
    return true;
}
