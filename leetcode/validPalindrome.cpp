class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.length();

        //first convert uppercase to lowercase
        int i = 0;
        while(i <= length){
            if((s[i] >= 'A') && (s[i] <='Z')){
                s[i] = s[i]-'A'+'a';
            }
            i++;
        }

        //removing all non-alphanumeric
        string ans;
        cout<<s<<endl;
        int j = 0;
        while(j <= length){
            if((s[j] >= 'a')&& (s[j] <= 'z') || (s[j] >= '0')&&(s[j] <= '9')){
                ans.push_back(s[j]);
            }
            j++;
        }

        cout<<ans<<endl;

        //check palindrome
        int k = 0;
        int l = ans.length() - 1;
        while(k <= l){
            if(ans[k] == ans[l]){
                k++;
                l--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};