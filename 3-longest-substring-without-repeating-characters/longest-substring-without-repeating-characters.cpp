class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        // for(char x:s){
        //     mp[x]++;
        // }
        int l=0;
        int len=0;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }
            len=max(len,r-l+1);
        }
        return len;
    }
};