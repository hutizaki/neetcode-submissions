class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix[0].size() - 1;
        for (vector<int> row : matrix) {
            if (row[left] <= target && row[right] >= target) {
                return rowSearch(row, target);
            }
        }
        return false;
    }

    bool rowSearch(vector<int> row, int target) {
        int left = 0;
        int right = row.size() - 1;
        int mid = 0;
        if (row[mid] == target) return true;
        while (left < right) {
            int mid = right - left / 2;
            if (row[mid] == target) {
                return true;
            }

            if (row[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }

};
