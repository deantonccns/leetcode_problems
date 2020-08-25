/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0)
            return 0;
        
        vector<char> s_v(s.begin(), s.end());

        auto search_start = s_v.begin();
        int n_max = 1;

        for(int i=1; i<s_v.size(); i++)
        {
            auto end = s_v.begin() + i;
            auto it = std::find(search_start, end, s_v[i]);
            search_start = it == end? search_start: it + 1;
            int n = i - (search_start - s_v.begin()) + 1;
            n_max = std::max(n , n_max);
        }
        return n_max;
    }
};
// @lc code=end

