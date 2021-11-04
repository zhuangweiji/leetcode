#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // 元素种类[0\1\2]非常有限，可以使用计数排序
  // 时间复杂度：O(n)
  // 空间复杂度：O(1)
  void sortColors_0(vector<int>& nums) {
    int count[3] = {0};  // 存放0，1，2三个元素的频率
    for (int i = 0; i < nums.size(); i++) {
      assert(nums[i] >= 0 && nums[i] <= 2);
      count[nums[i]]++;
    }

    int index = 0;
    for (int color = 0; color <= 2; color++) {
      for (int i = 0; i < count[color]; i++) {
        nums[index++] = color;
      }
    }
  }

  void sortColors_1(vector<int>& nums) {
    
  }
};

int main() { return 0; }