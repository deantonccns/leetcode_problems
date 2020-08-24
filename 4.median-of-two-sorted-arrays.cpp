/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        size_t size = nums1.size() + nums2.size();
        vector<int> merged(size);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());        
        if (size&1)
            return merged.at(size / 2);
        return (merged.at(size / 2) + merged.at(size / 2  - 1)) / 2.0;
    }
};
// @lc code=end

