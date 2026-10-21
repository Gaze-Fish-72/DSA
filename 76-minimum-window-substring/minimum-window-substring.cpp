class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        unordered_map<char,int>mp;
        for(char &x:t) mp[x]++;
        int reqCnt=m;
        int minLen=INT_MAX;
        int idx=0;
        int l=0;
        for(int r=0;r<n;r++){
            if(mp[s[r]]>0) reqCnt--;
            mp[s[r]]--;
            while(reqCnt==0){
                if(minLen>(r-l+1)){
                    minLen=r-l+1;
                    idx=l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0) reqCnt++;
                l++;
            }
        }
        return minLen==INT_MAX?"":s.substr(idx,minLen);
    }
};