//Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.


class Solution {
public:
    bool isPalindrome(int x) {
        int x_copy = x;
        int reversed=0;
        int pop =0;
        while (x_copy!= 0){
            pop = x_copy % 10;
            x_copy /= 10;
            reversed *= 10;
            reversed += pop;
        }
        
        return reversed==x;
    }
        
    
}; 
