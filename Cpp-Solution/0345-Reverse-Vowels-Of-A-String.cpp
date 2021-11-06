/*
 * https://leetcode-cn.com/problems/reverse-vowels-of-a-string/description/
 * [345] 反转字符串中的元音字母
 */
#include <iostream>
#include <string>

using namespace std;

class Solution {
 public:
  string reverseVowels(string s) {
    string str(s);
    if (str.size() <= 1) {
      return str;
    }

    int l = 0, r = s.size() - 1;

    while (l < r) {
      if (!isVowel(str[l])) {
        l++;
        continue;
      }
      if (!isVowel(str[r])) {
        r--;
        continue;
      }
      // cout << "swaping " << str[l] << "<->" << str[r] << endl;
      swap(str[l], str[r]);
      l++;
      r--;
    }

    return str;
  }

 private:
  bool isVowel(char c) {
    char lowerc = tolower(c);
    if (lowerc == 'a' || lowerc == 'e' || lowerc == 'i' || lowerc == 'o' ||
        lowerc == 'u') {
      return 1;
    }
    return 0;
  }
};

int main() {
  string s = "hello";
  cout << "Reversing: " << s << "<->" << Solution().reverseVowels(s) << endl;
  return 0;
}
// 输入：s = "hello"
// 输出："holle"
// 示例 2：
//
// 输入：s = "leetcode"
// 输出："leotcede"