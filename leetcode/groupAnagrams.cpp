class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<string>temp = strs;
        
        //sort string of temp
        for(int i = 0; i < strs.size(); i++){
            sort(temp[i].begin(),temp[i].end());
        }
        for(int i = 0; i < strs.size(); i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;

        //iterate over temp
        int i = 0;
        int n = strs.size();
        while(i < n){
            vector<string>arr;
            if( temp[i]=="0"){
                i++;
            }
            else{
                arr.push_back(strs[i]);
                if(i < n-1){
                    for(int j = i+1; j < n; j++){
                        if(temp[i] == temp[j]){
                            arr.push_back(strs[j]);
                            temp[j] = "0";
                        }
                    }
                    
                }

                ans.push_back(arr);
                i++;
            }
        }
        return ans;
    
    }
};