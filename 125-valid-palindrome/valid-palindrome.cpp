class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(char i:s){
            if(isalnum(i)){
                t+=i;
            }
        }
        for(char &i:t){
            i=tolower(i);
        }
        int i=0;
        int j=t.length()-1;
        while(i<j){
            if(t[i]!=t[j]){
                return false;
                break;
            }
                i++;
                j--;
        }
        return true;
    }
};