class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        vector<int>freq(26,0);
        int l=0;
        int maxi=0;
        int len=0;
        for(int r=0;r<n;r++){
            freq[s[r]-'A']++;
            maxi=max(maxi,freq[s[r]-'A']);
            while((r-l+1)-maxi>k){
                freq[s[l]-'A']--;
                l++;
            }
            len=max(len,r-l+1);
        }
        return len;
    }
};