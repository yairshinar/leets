//The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

//P   A   H   N
//A P L S I I G
//Y   I   R
//And then read line by line: "PAHNAPLSIIGYIR"

//Write the code that will take a string and make this conversion given a number of rows:

class Solution {
public:
    string convert(string s, int numRows) {
        
        if (numRows == 1) return s;
        
        vector<string> rows(numRows);
        int count;
        for (int i=0; i< s.size(); i++) {
            if (count<numRows){
                rows[count]+=s[i];
                count++;
            }
            else{
                count--;
                while (count!=0) {                    
                    rows[--count]+=s[i];    
                    i++;
                }
                count=1;
                i--;
                
            }           
        }
        string ret;
        for (string row : rows) ret += row;
        return ret;
     }   
};
