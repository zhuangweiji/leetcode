#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    int freq[256] = {0};  // 用于记录出现的频次，可以用O(1)的时间判定
    int l = 0, r = -1;  // 区间s[l...r]为滑动窗口
    int res = 0;
    while (l < s.size()) {
      if (freq[s[r + 1]] == 0 && r + 1 < s.size()) {
        r++;
        freq[s[r]]++;
      } else {
        freq[s[l]]--;
        l++;
      }

      res = max(res, r - l + 1);
    }
    return res;
  }
};

int main() {
  string s = "abcabcbb";  // result = 3
  int res = Solution().lengthOfLongestSubstring(s);
  cout << "len = " << res << endl;
  return 0;
}