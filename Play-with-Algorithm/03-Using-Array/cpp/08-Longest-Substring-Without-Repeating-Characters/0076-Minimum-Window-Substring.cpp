/*
 * [76] 最小覆盖子串
 * https://leetcode-cn.com/problems/minimum-window-substring/description/
 */
#include <iostream>
#include <string>

using namespace std;

class Solution {
 public:
  string minWindow(string s, string t) {
    string res;
    int len_s = s.size();
    int len_t = t.size();
    if (len_t > len_s) {
      return res;
    }

    int minLen = len_s + 1;

    int freq_t[256] = {0};
    for (int i = 0; i < len_t; i++) {
      freq_t[t[i]]++;
    }

    int freq_s[256] = {0};

    int l = 0, r = -1;  // 滑动窗[l...r]

    while(l < len_s - len_t + 1){
      if(_isSubstring(freq_s, freq_t) && minLen > r - l + 1 ){
        minLen = min(minLen, r - l + 1);
        res = s.substr(l, minLen);
        freq_s[s[l]]--;
        l ++;
      }else if (!_isSubstring(freq_s, freq_t) && r < len_s-1){
        r++;
        freq_s[s[r]]++;
      }else{
        freq_s[s[l]]--;
        l++;
      }
    }
    return res;
  }

 private:
  bool _isSubstring(int* freq_s, int* freq_t) {
    for(int i =0;i<256;i++){
      if(freq_s[i] < freq_t[i]){
        return 0;
      }
    }
    return 1;
  }
};

int main() {
  cout << Solution().minWindow("ADOBECODEBANC", "ABC") << endl;
  // BANC
  cout << Solution().minWindow("a", "aa") << endl;
  // empty
  cout << Solution().minWindow("aa", "aa") << endl;
  // aa
  cout << Solution().minWindow("bba", "ab") << endl;
  // ba
  return 0;
}