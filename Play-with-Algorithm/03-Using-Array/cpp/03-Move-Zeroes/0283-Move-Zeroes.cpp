#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // 正确，但是另外开辟了辅助空间
  // 时间复杂度 O(n)
  // 空间复杂度 O(n)
  void moveZeroes0(vector<int>& nums) {
    vector<int> nonZeroElements;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i]) nonZeroElements.push_back(nums[i]);
    }

    for (int i = 0; i < nonZeroElements.size(); i++)
      nums[i] = nonZeroElements[i];

    for (int i = nonZeroElements.size(); i < nums.size(); i++) nums[i] = 0;
  }

  // 优化版本1, 不开辟辅助空间，原地完成MoveZeros的操作
  // 但把非0元素移动动前面后，还需要为后面的元素赋0
  // 时间复杂度 O(n)
  // 空间复杂度 O(1)
  void moveZeroes1(vector<int>& nums) {
    int k = 0;  // nums中，[0...k)的元素均为非0元素

    // 遍历到第i个元素后，保证[0...i]中的所有非0元素
    // 都按照顺序排列在[0...k)中
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i]) nums[k++] = nums[i];
    }

    for (; k < nums.size(); k++) nums[k] = 0;
  }

  // 优化版本2，把非0元素移动到前面后，0元素已经存至后面
  // 时间复杂度 O(n)
  // 空间复杂度 O(1)
  void moveZeroes2(vector<int>& nums) {
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

int main() {
  int arr[] = {0, 1, 0, 3, 12};
  vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

  Solution().moveZeroes2(vec);

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  return 0;
}