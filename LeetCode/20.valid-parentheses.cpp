/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */
class Solution {
public:
    bool isValid(string s) {
        stack<char> mem;
        for(char& word: s)
        {
            switch (word)
            {
                case '(':
                case '[':
                case '{':
                {
                    mem.push(word);
                    break;
                }
                case ')':
                {
                    if(mem.empty() || mem.top() != '(')
                        return false;
                    else
                    {
                        mem.pop();
                        break;
                    }
                    
                }
                case ']':
                {
                    if(mem.empty() || mem.top() != '[')
                        return false;
                    else
                    {
                        mem.pop();
                        break;
                    }
                    
                }
                case '}':
                {
                    if(mem.empty() || mem.top() != '{')
                        return false;
                    else
                    {
                        mem.pop();
                        break;
                    }
                    
                }
                default:
                    break;
            }
        }
        return mem.empty();
    }
};

