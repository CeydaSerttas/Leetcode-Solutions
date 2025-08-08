# 0009. Palindrome Number
# Language: 💻 C++

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  

        string s = to_string(x);  
        int i = 0, j = (int)s.size() - 1; 

        while (i < j) {
            if (s[i] != s[j]) {   
                return false;
            }
            i++;
            j--;
        }
        return true; 
    }
};


soluton 2-without string conversion
class Solution {

    public:
    bool isPalindrome(int x){
        if(x<0 || (x%10 == 0 && x != 0)) return false;
        int reversed =0;
        while(x>reversed){
            int lastDigit = x % 10;
            reversed =reversed *10 + lastDigit;
            x/=10;
       }
       return (x== reversed || x == reversed /10);
    }
};