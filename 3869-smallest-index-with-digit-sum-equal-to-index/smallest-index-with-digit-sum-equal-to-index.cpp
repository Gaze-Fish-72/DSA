class Solution {
public:
int digitSum(int num) {
    int sum = 0;
    if (num < 0) num = -num; 
    while (num > 0) {
        sum += num % 10; 
        num /= 10; 
    }
    return sum;
    }
    int smallestIndex(vector<int>& nums) {
         int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=digitSum(nums[i]);
            if(nums[i]==i){
                return i;
            }
        }
        return -1;
    }
};