/*
 * [215] 数组中的第K个最大元素
 * https://leetcode-cn.com/problems/kth-largest-element-in-an-array/description/
 * Time: 20211106
 */
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
  }
};

int main() {
  // int arr[] = {3, 2, 1, 5, 6, 4};
  // vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
  vector<int> vec = {3, 2, 1, 5, 6, 4};
  int k = 2;
  // result = 5;

  int res = Solution().findKthLargest(vec, k);

  cout << "res = " << res << endl;

  for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
  cout << endl;

  return 0;
}