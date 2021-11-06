/*
 * [344] 反转字符串
 * https://leetcode-cn.com/problems/reverse-string/description/
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void reverseString(vector<char>& s) {
    int l = 0, r = s.size() - 1;  // [l...r]

    while (l < r) {
      swap(s[l++], s[r--]);
    }
  }
};

int main() {
  vector<char> vec = {'h', 'e', 'l', 'l', 'o'};

  Solution().reverseString(vec);

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }

  return 0;
}
//输入：s = ["h","e","l","l","o"]
//输出：["o","l","l","e","h"]

//输入：s = ["H","a","n","n","a","h"]
//输出：["h","a","n","n","a","H"]
