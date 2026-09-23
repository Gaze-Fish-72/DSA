class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum<x) return -1;
        if(sum==x) return n;
        int l=0;
        int sub=0;
        int len=INT_MIN;
        for(int r=0;r<n;r++){
            sub+=nums[r];
            while(sub>sum-x && l<=r){
                sub-=nums[l];
                l++;
            }
            if(sub==(sum-x)){
                len=max(len,r-l+1);
            }
        }
        if(len==INT_MIN){
            return -1;
        }
        else return n-len;
    }
};