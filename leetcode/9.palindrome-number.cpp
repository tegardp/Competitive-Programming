/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        std::string reverse_str = str;
        std::reverse(reverse_str.begin(), reverse_str.end());
        if(str.compare(reverse_str) == 0)
            return true;
        return false;
    }
};
// @lc code=end

