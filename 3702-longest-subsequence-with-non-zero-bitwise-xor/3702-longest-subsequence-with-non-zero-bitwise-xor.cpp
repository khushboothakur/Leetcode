class Solution {
public:
    int longestSubsequence(vector<int>& a) {
        int n = a.size();
        int res = 0;
        int allZeros = true;

        for (int i = 0; i < n; i++) {
            res = res ^ a[i];

            if (a[i] != 0) {
                allZeros = false;
            }
        }
        if (allZeros == true) {
            return 0;
        }
        return (res == 0)? n - 1: n;
    }
};