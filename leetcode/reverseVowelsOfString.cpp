class Solution {
public:
    string reverseVowels(string s) {
        int length = s.length();
        int i = 0;
        int j = length -1;

        while(i <= j){
            if(isalpha(s[i]) == 0){
                i++;
            }
            else if(isalpha(s[j]) == 0){
                j--;
            }
            else{
                if(s[i]=='a' || s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
                {
                      if((s[j]=='a' || s[j]=='A'||s[j]=='e'||s[j]=='E'||s[j]=='i'||s[j]=='I'||s[j]=='o'||s[j]=='O'||s[j]=='u'||s[j]=='U'))  
                        {
                            swap(s[i],s[j]);
                            i++;
                            j--;
                        }
                      else{
                        j--;
                      }  
                }
                else{
                    i++;
                }  
            }
        }
        return s;
    }
};