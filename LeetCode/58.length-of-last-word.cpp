/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length();
        int lastword = 0;
        bool canStart = false;
        if(length == 0)
            return lastword;
        for(int i = length - 1; i >= 0; i--)
        {
            if(s[i] != ' ')
                canStart = true;
            if(canStart)
            {
                if(s[i] == ' ')
                return lastword;
                lastword++;
            }
            
        }
        return lastword;
    }
};

