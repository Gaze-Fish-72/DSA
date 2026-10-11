class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        nums.insert(nums.begin(),0);
        int ans=0;
        for(int i=1;i<n+1;i++){
            int multi=1;
            if(n%i==0){
                multi=nums[i]*nums[i];
                ans+=multi;
            }
        }
        return ans;
    }
};