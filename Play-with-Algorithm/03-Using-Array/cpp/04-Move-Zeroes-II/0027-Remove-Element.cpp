/* [27] 移除元素
 * https://leetcode-cn.com/problems/remove-element/description/
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int p_end = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        nums[p_end++] = nums[i];
      }
    }
    return p_end;
  }
};

int main() {
  // int arr[4] = {3, 2, 2, 3};
  // int val = 3;
  // result: 2, nums = [2,2]
  int arr[] = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;
  // result: 5, nums = [0,1,4,0,3]
  vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

  int len = Solution().removeElement(vec, val);

  cout << "len = " << len << endl;
  for (int i = 0; i < len; i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  return 0;
}