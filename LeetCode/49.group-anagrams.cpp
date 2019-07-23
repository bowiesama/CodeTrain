/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> my_map;
        for(string s : strs)
        {
            string t = s;
            sort(t.begin(), t.end());
            my_map[t].push_back(s);
        }
        vector<vector<string>> res;
        for(auto p : my_map)
        {
            res.push_back(p.second);
        }
        return res;
    }
};

