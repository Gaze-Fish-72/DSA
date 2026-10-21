class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>dq;
        vector<int>cumSum(n,0);
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(i==0) cumSum[i]=nums[i];
            else cumSum[i]=cumSum[i-1]+nums[i];
            if(cumSum[i]>=k) ans=min(ans,i+1);
            while(!dq.empty() && cumSum[i]-cumSum[dq.front()]>=k){
                ans=min(ans,i-dq.front());
                dq.pop_front();
            }
            while(!dq.empty() && cumSum[i]<=cumSum[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        return ans==INT_MAX?-1:ans;
    }
};