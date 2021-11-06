/*
 * [88] 合并两个有序数组
 * https://leetcode-cn.com/problems/merge-sorted-array/description/
 * Time: 20211106
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if (n == 0) return;
    if (m == 0) {
      nums1 = nums2;
      return;
    }

    int index1 = m - 1, index2 = n - 1;

    for (int r = nums1.size() - 1; r >= 0; r--) {
      if (index1 >= 0 && index2 >= 0 && nums2[index2] >= nums1[index1]) {
        nums1[r] = nums2[index2];
        index2--;
      } else if (index1 >= 0) {
        nums1[r] = nums1[index1];
        index1--;
      } else {
        nums1[r] = nums2[index2];
        index2--;
      }
    }
  }
};

int main() {
  // int nums1[] = {1, 2, 3, 0, 0, 0}, nums2[] = {2, 5, 6};
  // int m = 3, n = 3;
  // result = [1,2,2,3,5,6]
  int nums1[] = {2, 0}, nums2[] = {1};
  int m = 1, n = 1;
  // result = [1,2]
  vector<int> vec1(nums1, nums1 + sizeof(nums1) / sizeof(int));
  vector<int> vec2(nums2, nums2 + sizeof(nums2) / sizeof(int));

  Solution().merge(vec1, m, vec2, n);

  for (int i = 0; i < vec1.size(); i++) cout << vec1[i] << " ";

  cout << endl;

  return 0;
}