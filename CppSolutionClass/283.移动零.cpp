/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    int k = 0;

    // 遍历到第i个元素后，保证[0...i]中的所有非0元素
    // 都按照顺序排列在[0...k)中
    // 同时，[k..i] 为0
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i])
        if (i != k)
          swap(nums[k++], nums[i]);
        else  // i == k (整个数组都是非0元素
          k++;
    }
  }
};
// @lc code=end
