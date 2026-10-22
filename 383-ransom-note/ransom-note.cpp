class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq(26,0);
        for(char& x:magazine) freq[x-'a']++;
        for(char& i:ransomNote){
            if(freq[i-'a']==0){
                return false;
            }
            freq[i-'a']--;
        }
        return true;
    }
};