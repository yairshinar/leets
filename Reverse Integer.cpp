//Given a 32-bit signed integer, reverse digits of an integer.
 
       
class Solution {
public:
    int reverse(int x) {
  
        int reversed=0;
        while (x!= 0){
            int pop = x % 10;
            x /= 10;
            reversed *= 10;
            reversed += pop;
        }
            
        return reversed;
    }
    
};
