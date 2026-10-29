class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int ans=0;
        for(int x:nums) mp[x]++;
        for(auto i:mp){
            if(i.second==1){
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};