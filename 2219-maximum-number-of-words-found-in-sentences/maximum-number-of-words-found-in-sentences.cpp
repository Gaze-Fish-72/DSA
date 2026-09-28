class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int maxi=0;
        for(auto & i:sentences){
            int word=1;
            for(auto &j:i){
                if(j==' ') word++;
            }
            maxi=max(word,maxi);
        }
        return maxi;
    }
};