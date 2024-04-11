class Solution {
public:
    string reverseOnlyLetters(string s) {
      int len = s.length();
      int i = 0;
      int j = len - 1;

      while(i < j){
        if(isalpha(s[i]) && isalpha(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if(isalpha(s[i]) == 0){
            i++;
        }
        else if(isalpha(s[j]) == 0){
            j--;
        }
      }
      return s;
    }
};