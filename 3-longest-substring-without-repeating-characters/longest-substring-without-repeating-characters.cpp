class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_set<char>st;
        int l=0;
        int len=0;
        for(int r=0;r<n;r++){
            while(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            len=max(len,r-l+1);
        }
        return len;
    }
};