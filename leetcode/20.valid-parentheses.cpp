/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for(auto i: s) {
            if (t.empty())
                t.push(i);
            else {
                if ((t.top() == '(' && i == ')') ||
                    (t.top() == '[' && i == ']') ||
                    (t.top() == '{' && i == '}'))
                {
                        t.pop();
                } else
                    t.push(i);
            }
        }
        if(t.empty())
            return true;
        return false;
    }
};
// @lc code=end

