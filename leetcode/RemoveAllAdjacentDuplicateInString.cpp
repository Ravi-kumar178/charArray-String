class Solution {
public:
    string removeDuplicates(string s) {
        int length = s.length();
        string ans;
        int index = 0;

        while(index < length){
            if((ans.length() > 0) && (ans.back() == s[index])){
                ans.pop_back();
            }
            else if(ans.length() == 0){
                ans.push_back(s[index]);
            }
            else{
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }
};