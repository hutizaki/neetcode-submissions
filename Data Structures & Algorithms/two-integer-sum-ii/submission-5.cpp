class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        bool searching = true;
        int left = 0;
        int right = numbers.size() - 1;
        while (searching) {

            int curr = numbers[left] + numbers[right];
            if (curr == target) {
                return {left + 1, right + 1};
            } else if (curr > target) {
                right--;
            } else {
                left++;
            }
        }
    }
};
