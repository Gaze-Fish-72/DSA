class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string s="";
        string t="";
        for(int i=0;i<n;i++){
            s+=word1[i];
        }
        for(int j=0;j<m;j++){
            t+=word2[j];
        }
        int k=0;
        while(k<s.length()||k<t.length()){
            if(s[k]!=t[k]) return false;
            k++;
        }
        return true;
    }
};