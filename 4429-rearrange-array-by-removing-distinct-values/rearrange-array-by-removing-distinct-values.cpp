class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        while(true){
            bool found=false;
        for(auto & x:mp){
            if(x.second!=0){
            ans.push_back(x.first);
            x.second--;
            found=true;
            }
        }
        if(found==false) break;
        }
        return ans;
    }
};