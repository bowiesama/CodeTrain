/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */
class Solution {
public:
    /*static bool comp(vector<int>& a, vector<int>& b){
        return a.begin() < b.begin();
    }   

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size = intervals.size();
        vector<vector<int>> res;
        if(size == 0)
            return res;
        sort(intervals.begin(), intervals.end(), comp);
        res.push_back(intervals[0]);
        for(int i = 1; i < size; i++)
        {   
            for(int j = 0; j < res.size(); j++)
            {
                if(intervals[i][1] < res[j][0])
                {
                    res.push_back(intervals[i]);
                    break;
                }
                if(!(intervals[i][0] > res[j][1]))
                {
                    int head = std::min(intervals[i][0], res[j][0]);
                    int tail = std::max(intervals[i][1], res[j][1]);
                    res[j][0] = head;
                    res[j][1] = tail;
                    break;
                }
                if(j == res.size() - 1)
                    res.push_back(intervals[i]);
            }
        }
        return res;
    }*/

    /*vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if (intervals.empty()) 
            return res;
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b){return a.begin() < b.begin();});
        res.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) 
        {
            int size = res.size();
            if (res[size - 1][1] < intervals[i][0])
                res.push_back(intervals[i]);
            else
                res[size - 1][1] = max(res[size - 1][1], intervals[i][1]);
        }
        return res;
    }*/
     vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        for (const auto& vec: intervals) {
            if (result.empty() || result.back()[1] < vec[0]) {
                result.push_back(vec);
            }
            else {
                result.back()[1] = max(result.back()[1], vec[1]);
            }
        }
        return result;
    }
};

