class Solution {
public:

    bool checkPalindrome(string s, int i, int j){
        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }


    bool validPalindrome(string s) {
        int length = s.length();
        int i = 0;
        int j = length - 1;
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                bool leftCheck = checkPalindrome(s,i+1,j);
                bool rightCheck = checkPalindrome(s,i,j-1);
                if(leftCheck || rightCheck){
                    return true;
                }
                return false;
                
            }
        }
        return true;
    }
};