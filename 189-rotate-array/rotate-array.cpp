class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(nums[i]);
        }
        nums.clear();
        for(int i=n-k;i<n;i++){
            nums.push_back(arr[i]);
        }
        for(int i=0;i<n-k;i++){
            nums.push_back(arr[i]);
        }
    }
};