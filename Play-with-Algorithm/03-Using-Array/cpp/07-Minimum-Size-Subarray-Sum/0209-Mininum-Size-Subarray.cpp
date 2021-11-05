#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // 滑动窗
  // 时间复杂度 O(n)
  // 空间复杂度 O(1)
  int minSubArrayLen(int target, vector<int>& nums) {
    int l = 0, r = -1;  // nums[l...r]为我们的滑动窗口
    int sum = 0;
    int len = nums.size() + 1;  // 比 nums 长度 更长

    while (l < nums.size()) {  // 窗口左边界在数组范围内，则循环继续

      if (r + 1 < nums.size() && sum < target) {
        r++;
        sum += nums[r];
      } else {  // r 已经到头 || sum >= target
        sum -= nums[l];
        l++;
      }

      if (sum >= target && len > r - l + 1) len = r - l + 1;
    }

    if (len < nums.size() + 1)
      return len;
    else
      return 0;
  }
};

int main() {
  int arr[] = {2, 3, 1, 2, 4, 3};
  int target = 7;
  //  int arr[] = {1, 4, 4};
  //  int target = 4;
  //  int arr[] = {1, 1, 1, 1, 1, 1, 1, 1};
  //  int target = 14;

  vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

  int res = Solution().minSubArrayLen(target, vec);

  cout << "res = " << res << endl;

  return 0;
}