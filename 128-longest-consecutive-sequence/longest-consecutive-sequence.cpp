class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        int ans=0;
        for(int i:nums){
            st.insert(i);
        }
        for(int i:st){
            if(st.find(i-1)!=st.end()){
                continue;
            }
                int currEle=i+1;
                int len=1;
                while(st.find(currEle)!=st.end()){
                    currEle++;
                    len++;
                }
                ans=max(ans,len);
        }
        return ans;
    }
};