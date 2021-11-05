#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // 最直接的思考，暴力解法，双层遍历
  // 时间复杂度 O(n^2)
  // 没有充分利用原数据有序的性质，提交会超时
  // 有序？二分搜索？O(nlogn)
  // 对撞指针 O(n)
  vector<int> twoSum_0(vector<int>& numbers, int target) {
    int l = 0, r = numbers.size() - 1;
    while (l < r) {
      if (numbers[l] + numbers[r] == target)
        return {l + 1, r + 1};
      else if (numbers[l] + numbers[r] < target) {
        l++;
      } else {
        // assert(numbers[l] + numbers[r] > target);
        r--;
      }
    }
    return {0, 0};
  }
};

int main() {
  int arr[] = {1, 2, 3, 4, 6, 11, 15, 18};
  int target = 15;
  vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
  vector<int> res = Solution().twoSum_0(vec, target);

  cout << arr[res[0] - 1] << " + " << arr[res[1] - 1];
  cout << " == " << target << endl;

  return 0;
}