class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        int j=0;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                reverse(word.begin()+j,word.begin()+i+1);
                break;
            }
        }
        return word;
    }
};