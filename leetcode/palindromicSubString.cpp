class Solution {
public:

    int countPalindrome(string s, int i, int j){
        int count = 0;
        while((i >= 0)&&(j < s.length())&& (s[i] == s[j])){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int length = s.length();
        int totalCount = 0;
        for(int i = 0; i < length; i++){
            int oddCount = countPalindrome(s,i,i);
            int evenCount = countPalindrome(s,i,i+1);
            totalCount = totalCount + oddCount + evenCount;
        }
        return totalCount;
    }
};