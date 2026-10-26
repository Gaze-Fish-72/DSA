class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int ans = 0, l = 0, cnt = 0, n = s.length();
        for (int r = 0; r < n; r++) {
            if (isVowel(s[r])) cnt++;
            if ((r - l + 1) == k) {
                ans = max(ans, cnt);
                if (isVowel(s[l])) cnt--;
                l++;
            }
        }
        return ans;
    }
};