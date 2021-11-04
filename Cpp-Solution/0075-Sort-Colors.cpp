#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  // 元素种类[0\1\2]非常有限，可以使用计数排序
  // 对整个数组遍历了两遍
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

  // 三路快排序的思想
  // 对整个数组只遍历一遍
  // 时间复杂度：O(n)
  // 空间复杂度：O(1)
  void sortColors_1(vector<int>& nums) {
    int zero = -1;          // [0...zero] == 0
    int two = nums.size();  // [two...n-1] == 2
    for (int i = 0; i < two; ){
      if(nums[i] == 1)
        i++;
      else if(nums[i] == 2)
        swap(nums[i], nums[--two]);
      else{// nums[i] == 0
        zero++;
        swap(nums[zero], nums[i]);
        i++;
      }

    }
  }
};

int main() { 
  int arr[] = {2, 2, 2, 1, 0, 1, 0, 2};
  vector<int> vec(arr, arr + sizeof(arr)/sizeof(int));
  
  Solution().sortColors_1(vec);
  for(int i=0; i < vec.size(); i++)
    cout << vec[i] << " ";
  cout << endl;

  return 0; 
}