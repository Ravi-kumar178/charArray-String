class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;

        for(int i = 0; i < strs.size(); i++){
            string currString = strs[i];

            if(i == 0){
                for(int j = 0; j < currString.length(); j++){
                    ans.push_back(currString[j]);
                }
            }
            else{
                if(ans.length() > currString.length()){
                    for(int j = 0; j < (ans.length()-currString.length()); j++){
                        ans.pop_back();
                    }
                }

                int k = 0;
                while(k < ans.length()){
                    if(ans[k] == currString[k]){
                        k++;
                    }
                    else{
                        for(int j = 0; j < (ans.length()-k); j++){
                            ans.pop_back();
                        }
                    }
                }
            }

        }
        return ans;
        
    }
};