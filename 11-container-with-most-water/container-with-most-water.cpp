class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int sum=0;
        int ans=INT_MIN;
        while(i<j){
            if(height[i]>height[j]){
                sum=height[j]*(j-i);
                j--;
            }
            else{
                sum=height[i]*(j-i);
                i++;
            }
            ans=max(sum,ans);
        }
        return ans;
    }
};