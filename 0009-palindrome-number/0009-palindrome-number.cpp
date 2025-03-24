#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        string reversed_x;
        bool palindrome;

        for (int i = x_str.length()-1; i >= 0; i--)
        {
            reversed_x += x_str[i];
        }

        if (x_str == reversed_x)
        {
            palindrome = true;
        }
        else
        {
            palindrome = false;
        }
        return palindrome;
    }
};