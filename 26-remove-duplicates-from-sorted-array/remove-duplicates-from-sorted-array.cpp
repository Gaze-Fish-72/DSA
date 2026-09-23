class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        int j=1;
        int k=0;
        while(j<n){
            if(nums[j]==nums[k]){
                j++;
            }
            else{
                swap(nums[j],nums[i]);
                j++;
                k++;
                i++;
            }
        }
        return k+1;
    }
};