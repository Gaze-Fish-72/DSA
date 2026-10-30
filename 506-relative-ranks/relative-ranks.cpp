class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[score[i]] = i;
        }
        sort(score.rbegin(), score.rend());
        for (int i = 0; i < n; i++) {
            int og_idx = mp[score[i]];
            if (i == 0) {
                ans[og_idx] = "Gold Medal";
            } else if (i == 1) {
                ans[og_idx] = "Silver Medal";
            } else if (i == 2) {
                ans[og_idx] = "Bronze Medal";
            } else {
                ans[og_idx] = to_string(i + 1);
            }
        }
        return ans;
    }
};