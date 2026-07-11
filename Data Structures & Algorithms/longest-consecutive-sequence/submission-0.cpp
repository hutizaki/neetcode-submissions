class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> noDup;
        int longest = 0;
        for (int x : nums) {
            noDup.insert(x);
        }
        for (int x : nums) {
            if (!noDup.contains(x - 1)) {
                int length = 0;
                while (noDup.contains(x + length)) {
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};
