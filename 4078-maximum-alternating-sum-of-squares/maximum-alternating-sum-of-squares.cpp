class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] = abs((long long)nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long sq = nums[i] * nums[i];
            if (i < n / 2) {
                sum -= sq;
            } else {
                sum += sq;
            }
        }
        return sum;
    }
};