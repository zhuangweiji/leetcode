/*
 * [438] 找到字符串中所有字母异位词
 * https://leetcode-cn.com/problems/find-all-anagrams-in-a-string/description/
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define NUM_CHARACTERS 26

class Solution {
 public:
  vector<int> findAnagrams(string s, string p) {
    vector<int> res = {};
    int len_s = s.size(), len_p = p.size();
    if (len_p > len_s || len_p == 0) {
      return res;
    }

    int freq_s[NUM_CHARACTERS] = {0};
    for (int i = 0; i < len_p; i++) {
      freq_s[s[i] - 'a']++;
    }

    int freq_p[NUM_CHARACTERS] = {0};
    for (int i = 0; i < len_p; i++) {
      freq_p[p[i] - 'a']++;
    }

    for (int i = 0; i < len_s - len_p + 1; i++) {  //[0,3)
      if (_isSame(freq_s, freq_p)) {
        res.push_back(i);
      }
      freq_s[s[i] - 'a']--;
      if (i < len_s - len_p) {
        freq_s[s[len_p + i] - 'a']++;
      }
    }
    return res;
  }

 private:
  bool _isSame(int* s, int* p) {
    for (int i = 0; i < NUM_CHARACTERS; i++) {
      if (s[i] != p[i]) {
        return 0;
      }
    }
    return 1;
  }
};

int main() {
  // string s = "cbaebabacd", p = "abc";
  string s = "abab", p = "ab";

  vector<int> res = Solution().findAnagrams(s, p);

  cout << "s = " << s << ", p = " << p << endl;
  cout << "res = ";
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
  cout << endl;

  return 0;
}