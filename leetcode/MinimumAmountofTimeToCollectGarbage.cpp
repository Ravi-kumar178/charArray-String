class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickG = 0;
        int pickP = 0;
        int pickM = 0;

        int lastG = 0;
        int lastM = 0;
        int lastP = 0;

        int travelP = 0;
        int travelG = 0;
        int travelM = 0;

        for(int i = 0; i < garbage.size(); i++){
            string currentString = garbage[i];
            for(int j = 0; j < currentString.length(); j++){
                if(currentString[j] == 'G'){
                    pickG++;
                    lastG = i;
                }
                else if(currentString[j] == 'P'){
                    pickP++;
                    lastP = i;
                }
                else if(currentString[j] == 'M'){
                    pickM++;
                    lastM = i;
                }

            }
        }

        //calculate time travel in moving
        for(int i = 0; i < lastP; i++){
            travelP += travel[i];
        }

        for(int i = 0; i < lastG; i++){
            travelG += travel[i];
        }

        for(int i = 0; i < lastM; i++){
            travelM += travel[i];
        }

        int ans = (pickG + travelG) + (pickP + travelP) + (pickM + travelM);
        return ans;
    }
};