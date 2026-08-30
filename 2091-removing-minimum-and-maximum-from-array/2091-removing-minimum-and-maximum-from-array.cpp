class Solution {
public:
    int minimumDeletions(vector<int>& a) {
        int n = a.size();

        int minIndex = 0;
        int maxIndex = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] < a[minIndex])
                minIndex = i;

            if (a[i] > a[maxIndex])
                maxIndex = i;
        }

        int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        int ans = min({
            right + 1,           // dono left se
            n - left,            // dono right se
            left + 1 + n - right // ek left, ek right
        });
        return ans;
    }
};