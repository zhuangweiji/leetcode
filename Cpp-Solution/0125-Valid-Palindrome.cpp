/*
 * [125] 验证回文串
 * https://leetcode-cn.com/problems/valid-palindrome/description/
 * Time: 20211106
 */
#include <iostream>
#include <string>

using namespace std;

class Solution {
 public:
  bool isPalindrome(string s) {
    if (s.size() <= 1) {
      return 1;
    }

    int l = 0, r = s.size() - 1;
    while (l < r) {
      if (!isalnum(s[l])) {
        l++;
        continue;
      }
      if (!isalnum(s[r])) {
        r--;
        continue;
      }
      if (tolower(s[l]) != tolower(s[r])) {
        return 0;
      }
      l++, r--;
    }
    return 1;
  }
};

int main() {
  string str1 = "A man, a plan, a canal: Panama";
  // result: True
  string str2 = "race a car";
  // result: False

  cout << Solution().isPalindrome(str1) << endl;
  cout << Solution().isPalindrome(str2) << endl;

  return 0;
}
