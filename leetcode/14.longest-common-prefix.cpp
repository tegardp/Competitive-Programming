/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), [](const string& a, const string& b) { return a.size() < b.size();});
        string common = "";
        for (int i = 0; i<strs[0].size(); i++) 
        {
            int count = 0;
            for(int j = 0; j < strs.size(); j++) {
                if (strs[j][i] == strs[0][i])
                {
                    count++;
                    if (count == strs.size()) {
                        common += strs[0][i];
                    }
                } else {
                    return common;
                }
            }
        }
        return common;
    }
};
// @lc code=end

