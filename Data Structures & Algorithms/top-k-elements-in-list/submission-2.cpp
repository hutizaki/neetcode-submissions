class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        vector<vector<int>> freq(nums.size() + 1);
        for (const auto& [x, y]: count) {
            freq[y].push_back(x);
        }

        vector<int> ans;

        for (int i = freq.size() - 1; i >0 ; i--) {
            for (int x : freq[i]) {
                ans.push_back(x);
                if (ans.size() == k) {
                    return ans;
                }
            }
        }
    }
};
