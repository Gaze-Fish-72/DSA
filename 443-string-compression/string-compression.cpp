class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;
        int i=0;
        while(i<n){
            char c=chars[i];
            int cnt=0;
            while(i<n && chars[i]==c){
                cnt++;
                i++;
            }
            chars[idx]=c;
            idx++;
            if(cnt>1){
                string s=to_string(cnt);
                for(char &ch:s){
                    chars[idx]=ch;
                    idx++;
                }
            }
        }
        return idx;
    }
};