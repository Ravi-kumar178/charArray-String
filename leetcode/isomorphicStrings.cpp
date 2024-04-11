class Solution {
public:

    void createMapping(string &s){
        char start = 'a';
        char mapping[260] = {0};

        for(auto ch:s){
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }

        //string updation
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            s[i] = mapping[ch];
        }
    }

    bool isIsomorphic(string s, string t) {
        createMapping(s);
        createMapping(t);
        
        if(s==t){
            return true;
        }
        return false;
    }
};