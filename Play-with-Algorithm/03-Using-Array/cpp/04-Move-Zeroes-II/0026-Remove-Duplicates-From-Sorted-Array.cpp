/* [26] 删除有序数组中的重复项
 * https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/description/
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;

    int k = 0;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] == nums[k]) {
        continue;
      } else {
        nums[++k] = nums[i];
      }
    }
    return k + 1;
  }
};

int main() {
  int arr[] = {1, 1, 1, 2, 2, 3, 4, 5};
  vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

  int res = Solution().removeDuplicates(vec);

  cout << "res = " << res << endl;
  for (int i = 0; i < res; i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  return 0;
}