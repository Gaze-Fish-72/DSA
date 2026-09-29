class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int occur=n/2;
        int maxi;
        for(int i : nums){
            mp[i]++;
        if(mp[i]>occur){
          maxi=i;
            }
        }
        return maxi;
    }
};