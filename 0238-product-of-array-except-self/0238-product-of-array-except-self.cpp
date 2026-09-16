class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector<int> ans(n, 1);

        // Left product
        int left = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = left;
            left = left * a[i];
        }

        // Right product
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * right;
            right = right * a[i];
        }
        return ans;
    }
};