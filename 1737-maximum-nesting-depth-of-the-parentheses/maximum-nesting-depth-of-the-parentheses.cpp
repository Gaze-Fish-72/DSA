class Solution {
public:
    int maxDepth(string s) {
        int i = 0;
        int j = 0;
        for(char c : s) {
            if(c == '(') {
                i++;
                j = max(j, i);
            }
            else if(c == ')') {
                i--;
            }
        }
        return j;
    }
};