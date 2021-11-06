/*
 * [80] 删除有序数组中的重复项 II
 * https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/description/
 */
#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() <= 2) {
      return nums.size();
    }
    int k = 1;
    for (int i = 2; i < nums.size(); i++) {
      if (nums[i] == nums[k - 1]) {
        continue;
      } else { // assert(nums[i] != nums[k - 1]);
        k++;
        nums[k] = nums[i];
      }
    }
    return k + 1;
  }
};

int main() {
  //                 k     i
  //           0  1  2  3  4  5
  int arr[] = {1, 1, 1, 2, 2, 3};  // Sorted
  // esult=5 ,[1, 1, 2, 2, 3]
  vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

  int res = Solution().removeDuplicates(vec);

  cout << "res = " << res << endl;
  for (int i = 0; i < res; i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  return 0;
}