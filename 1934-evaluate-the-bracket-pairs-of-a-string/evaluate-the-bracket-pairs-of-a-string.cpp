class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;

        for(auto &i : knowledge) {
            mp[i[0]] = i[1];
        }

        int i = 0;

        while(i < s.length()) {

            if(s[i] == '(') {

                int j = s.find(')', i);

                string key = s.substr(i + 1, j - i - 1);

                if(mp.find(key) != mp.end()) {
                    s.replace(i, j - i + 1, mp[key]);
                }
                else {
                    s.replace(i, j - i + 1, "?");
                }
            }

            i++;
        }

        return s;
    }
};