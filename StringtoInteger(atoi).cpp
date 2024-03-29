//Implement atoi which converts a string to an integer.

//The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

//The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

//If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.

//If no valid conversion could be performed, a zero value is returned.

class Solution {
  public:
    int myAtoi(string str) {
      char c;
      vector < int > vec;
      for (int i = 0; i < str.size(); i++) {
        c = str[i];
        if (c >= '0' && c <= '9') {
          vec.push_back(c - '0');
          
        }

      }
      int sum = 0;
      if (!vec.empty()) {
        for (int i = 0; i < vec.size(); i++) {
          sum += vec[i];
          if (i != vec.size() - 1) {
            sum *= 10;
          }

        }
        return sum;

      } else return 0;

    }
};
