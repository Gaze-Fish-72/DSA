class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i:nums){
            mp[i]++;
        }
        int maxi=INT_MIN;
        for(auto i:mp){
            if(i.second>maxi){
                maxi=i.second;
            }
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