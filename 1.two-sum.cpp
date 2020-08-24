/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> imap;
        for (int i=0; i< nums.size(); i++)
        {
            int numToSearch = target - nums[i];
            auto it = imap.find(numToSearch);
            if (it != imap.end())
                return vector<int>{it->second, i};

            imap[nums[i]] = i;
        }
        return vector<int>();
    }
};
// @lc code=end

