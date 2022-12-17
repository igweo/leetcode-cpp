class Solution {
public:
  int longestPalindrome(string s) {
    int count = 0;
    unordered_map<char, int> m;
    for (char c : s) {
      if (m.find(c) == m.end())
        m[c] = 1;
      else
        m[c]++;
    }
    if (m.size() == 1)
      return m[m.begin()->first];
    bool even = 1;
    for (auto i : m) {
      if (i.second % 2 == 0)
        count += i.second;
      if (i.second == 1)
        even = 0;
      else if (i.second % 2 != 0 && i.second > 2) {
        even = 0;
        int num = i.second;
        while (num % 2 != 0) {
          num--;
        }
        count += num;
      }
    }
    return (even ? count : count + 1);
  }
};
