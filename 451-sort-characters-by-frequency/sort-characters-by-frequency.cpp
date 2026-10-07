class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
       int n=s.length();
       for(int i=0;i<n;i++){
        mp[s[i]]++;
       }
       string ans="";
       while(!mp.empty()){
        int maxFreq=0;
        int maxChar=0;
        for(auto i:mp){
            if(i.second>maxFreq){
                maxFreq=i.second;
                maxChar=i.first;
            }
        }
        while(maxFreq--){
            ans.push_back(maxChar);
        }
        mp.erase(maxChar);
       }
       return ans;
    }
};