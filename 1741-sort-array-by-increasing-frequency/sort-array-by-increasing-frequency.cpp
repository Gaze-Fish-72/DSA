class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x : nums) {
            mp[x]++;
        }
        vector<int> ans;
        while(!mp.empty()) {
            int minNum = 0;
            int minFreq = INT_MAX;
            for(auto it : mp) {
                if(it.second < minFreq) {
                    minFreq = it.second;
                    minNum = it.first;
                }
                else if(it.second == minFreq && it.first > minNum) {
                    minNum = it.first;
                }
            }
            while(minFreq--) {
                ans.push_back(minNum);
            }
            mp.erase(minNum);
        }
        return ans;
    }
};