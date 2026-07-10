class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;
        
        for (int i = 0; i < strs.size(); i++) {
            int letters[26] = {}; // -97 for ASCII offset
            for (int j = 0; j < strs[i].length(); j++) {
                letters[int(strs[i][j]) - 97]++;
            }
            vector<int> key(letters, letters + 26);
            mp[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (const auto& [_, value] : mp) {
            ans.push_back(value);
        }
        return ans;
    }
};
