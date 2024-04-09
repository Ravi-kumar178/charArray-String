class Solution {
public:

    void createMapping(string &s){
        char start = 'a';
        char mapping[300] = {0};

        //mapp
        for(auto ch:s){
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }

        //update string
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            s[i] = mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        //mapp pattern
        createMapping(pattern);

        //iterate on every string of words
        for(int i = 0; i < words.size(); i++){
            string tempString = words[i];
            //map string
            createMapping(tempString);
            if(tempString == pattern){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};