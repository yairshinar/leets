//Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.


int expandAroundCenter(string s, int left, int right) {
    int L = left, R = right;
    while (L >= 0 && R < s.length() && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
}

class Solution {
public:
    string longestPalindrome(string s) {
        
        int str_len =s.length();
        if (str_len < 1) return "";
        int start = 0, end = 0;
        for (int i = 0; i < str_len; i++) {
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i + 1);
            int len = max(len1, len2);
            if (len > end - start) {
                start = i - (len - 1) / 2;
                 end = i + len / 2;
            }
        }
         
        
        return s.substr(start, end-start+1);
    }
};

   
