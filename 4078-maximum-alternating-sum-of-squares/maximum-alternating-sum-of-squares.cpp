class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            if(nums[i]<0) nums[i]*=-1;
        }
        sort(nums.begin(),nums.end());
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]=nums[r];
                r--;
            }
            else{
                arr[i]=nums[l];
                l++;
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum+=arr[i]*arr[i];
            }
            else{
                sum-=arr[i]*arr[i];
            }
        }
        return sum;
    }
};