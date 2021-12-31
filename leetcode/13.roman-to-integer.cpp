/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        stack<char> st;
        for(auto i: s){
            if(st.empty()) {
                st.push(i);
            }else{
                switch (st.top())
                {
                case 'I':
                    if(i == 'V') {
                        result += 4;
                        st.pop();
                    } else if (i == 'X') {
                        result += 9;
                        st.pop();
                    } else {
                        st.push(i);
                    }
                    break;

                case 'X':
                    if(i == 'L') {
                        result += 40;
                        st.pop();
                    } else if (i == 'C') {
                        result += 90;
                        st.pop();
                    } else {
                        st.push(i);
                    }
                    break;
                
                case 'C':
                    if(i == 'D') {
                        result += 400;
                        st.pop();
                    } else if (i == 'M') {
                        result += 900;
                        st.pop();
                    } else {
                        st.push(i);
                    }

                    break;

                default:
                    st.push(i);
                    break;
                }
            }
        }
        while (!st.empty()) {
            switch (st.top())
            {
            case 'M':
                result += 1000;
                st.pop();
                break;

            case 'D':
                result += 500;
                st.pop();
                break;
            
            case 'C':
                result += 100;
                st.pop();
                break;
            
            case 'L':
                result += 50;
                st.pop();
                break;

            case 'X':
                result += 10;
                st.pop();
                break;

            case 'V':
                result += 5;
                st.pop();
                break;
            
            case 'I':
                result += 1;
                st.pop();
                break;

            default:
                break;
            }
        }
        return result;
    }
};
// @lc code=end

