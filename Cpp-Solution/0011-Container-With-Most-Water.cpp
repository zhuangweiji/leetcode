/*
 * [11] 盛最多水的容器
 * https://leetcode-cn.com/problems/container-with-most-water/description/
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int maxArea(vector<int>& height) {
    if (height.size() <= 1) {
      return 0;
    }

    int l = 0, r = height.size() - 1;
    int maxArea = 0;
    int minHight = 0;
    while (l < r) {
      minHight = min(height[l], height[r]);
      maxArea = max(maxArea, minHight * (r - l));

      if (height[l] <= height[r]) {
        //    minHight = height[r];
        l++;
      } else {
        r--;
      }
    }

    return maxArea;
  }
};

int main() {
  // vector<int> vec = {4, 3, 2, 1, 4};
  // out : 16
  // vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  // 49
  vector<int> vec = {8, 9};
  int res = Solution().maxArea(vec);
  cout << "res = " << res;
  return 0;
}
//输入：height = [4,3,2,1,4]
//输出：16
//
//输入：height = [1,2,1]
//输出：2
