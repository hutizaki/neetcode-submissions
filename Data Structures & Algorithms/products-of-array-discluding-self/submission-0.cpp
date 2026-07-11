class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numSize = nums.size();
        vector<int> left(numSize); // [1,2,8,48]
        vector<int> right(numSize); // [0,48,24,6]
        vector<int> ans(numSize);
        int leftProd = 1;
        for (int i = 0; i < numSize; i++) {
            leftProd *= nums[i];
            left[i] = leftProd;
            cout << left[i] << endl;
        }

        int rightProd = 1;

        for (int j = numSize - 1; j > -1; j--) {
            rightProd *= nums[j];
            right[j] = rightProd;
        }


        for (int x = 0; x < numSize; x++) {
            if (x == 0) ans[x] = right[x + 1];
            else if (x == numSize - 1) ans[x] = left[x - 1];
            else ans[x] = left[x - 1] * right[x + 1];
        }
        return ans;
    }
};
