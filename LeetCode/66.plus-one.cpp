/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /*int size = digits.size();
        int m_double = size - 1;
        vector<int> res;
        int num = 0;
        if(size == 1 && digits[0] == 0)
        {
            res.push_back(1);
            return res;
        }
        for(int i = 0; i < size; i++)
        {
            num += digits[i] * (10 ^ m_double);
            m_double--;
        }
        num++;
        m_double = size - 1;
        for(int i = 0; i < size; i++)
        {
            int res_num = num / (10 ^ m_double);
            res.push_back(res_num);
            num = num - res_num *  (10 ^ m_double);
            m_double--;
        }
        return res;*/
        int size = digits.size();
        while(size >= 1)
        {
            if(digits[size - 1] == 9)
            {                
                digits[size - 1] = 0;
                if(size == 1)
                {
                    digits.insert(digits.begin(), 1);
                    break;
                }
                size--;
                continue;
            }
            else
            {
                digits[size - 1] = digits[size - 1] + 1;
                break;
            }
            
        }
        return digits;
    }
};

