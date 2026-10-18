class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.length();
        int cnt=0;
        unordered_map<char,int>mp;
        for(auto x:stones){
            mp[x]++;
        }
        for(auto i=0;i<n;i++){
            if(mp.find(jewels[i])!=mp.end()) cnt+=mp[jewels[i]];
        }
        return cnt;}
};