class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>dq;
        vector<int>ans(nums);
        int maxR=ans[0];
        for(int i=0;i<n;i++){
            while(!dq.empty() && dq.front()<i-k) dq.pop_front();
            if(!dq.empty()) ans[i]=max(ans[i],nums[i]+ans[dq.front()]);
            while(!dq.empty() && ans[i]>=ans[dq.back()]) dq.pop_back();
            dq.push_back(i);
            maxR=max(maxR,ans[i]);
        }
        return maxR;
    }
};