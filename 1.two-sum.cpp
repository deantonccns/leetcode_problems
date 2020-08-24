/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> imap;
        for (size_t i=0; i<nums.size(); i++)
        {
            int numToSearch = target - nums[i];
            auto it = imap.find(numToSearch);
            if (it != imap.end())
                return vector<int>{it->second, static_cast<int>(i)};

            imap[nums[i]] = i;
        }
        return vector<int>();
    }
};

/*
int main()
{
	Solution s;
	vector<int> nums{ 2, 7, 11, 15 };
	vector<int> twoSum = s.twoSum(nums, 9);
}
*/
// @lc code=end

