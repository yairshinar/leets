//Given a string, find the length of the longest substring without repeating characters.

class Solution {
public:
   
        int lengthOfLongestSubstring(string s) {
            std::vector<char> last_chars{};
            int max_len;
            int index = -1;
            bool in_array = false;
            for (int a = 0; a < s.size(); a++) {
                for (int b = 0; b < last_chars.size(); b++) {
                    //check if char in string array
                    if (s[a] == last_chars[b]) {
                         last_chars.erase(last_chars.begin(), last_chars.begin() + b);
                    }

                }

                if (max_len < last_chars.size()) {
                    max_len = last_chars.size();
                }
                last_chars.push_back(s[a]);



            }
            return max_len;
        }
    };
