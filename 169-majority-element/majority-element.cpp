class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int occur=n/2;
        int maxi;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>occur) maxi=x.first;
        }
        return maxi;
    }
};