class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int len=0;
        int zeros=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0) zeros++;
            while(zeros>1){
                if(nums[l]==0) zeros--;
                l++;
            }
            len=max(len,r-l);
        }
        return len;
    }
};