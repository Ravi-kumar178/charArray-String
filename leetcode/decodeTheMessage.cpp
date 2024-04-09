class Solution {
public:
    string decodeMessage(string key, string message) {
        //map the key first
        char start = 'a';
        char mapping[260] = {0};
        string ans;

        for(auto ch: key){
            if(ch != ' ' && mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }

        //decodeing the message
        for(auto ch: message){
            if(ch == ' '){
                ans.push_back(' ');
            }
            else{
                char decodedMessage = mapping[ch];
                ans.push_back(decodedMessage);
            }
        }
        return ans;
    }
};