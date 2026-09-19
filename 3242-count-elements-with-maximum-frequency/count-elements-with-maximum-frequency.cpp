class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int maxi=0;
        for(auto i:mp){
           maxi=max(maxi,i.second);
        }
        int cnt=0;
        for(auto j:mp){
            if(maxi==j.second){
                cnt+=j.second;
            }
        }
        return cnt;
    }
};